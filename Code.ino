const int ledPin = 13; //LED Declaration on Arduino pin 13
const int ldrPin = A0; //LDR Declaration on Arduino pin A0


void setup() {

Serial.begin(9600);
pinMode(ledPin, OUTPUT); //LED Declaration as output
pinMode(ldrPin, INPUT); //LDR Declaration as input

}


void loop() {

int ldrStatus = analogRead(ldrPin); //Read the ADC LDR value
if (ldrStatus <= 200) { //if adc value <= 200

  digitalWrite(ledPin, HIGH);  //The LED is on 
  Serial.print("Its DARK, Turn on the LED : "); //Print string on the terminal 
  Serial.println(ldrStatus); //Print value on the terminal
  
} else {

  digitalWrite(ledPin, LOW);  //The LED is off
  Serial.print("Its BRIGHT, Turn off the LED : ");  //Print string on the terminal 
  Serial.println(ldrStatus); //Print value on the terminal
  
}
delay(1000); //delay for 1 second
}
