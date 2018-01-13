int sensorPin = A0; // select the input pin for the photoresistor
int ledPin = 13; // select the pin for the LED
int sensorValue; // variable to store the value coming from the sensor

void setup() {
// declare the ledPin as an OUTPUT:
pinMode(sensorPin,INPUT);
pinMode(ledPin, OUTPUT);

}

void loop() {
// read the value from the sensor:
sensorValue = analogRead(sensorPin);
// turn the ledPin on
if(sensorValue <=3){
digitalWrite(ledPin, HIGH);
// stop the program for <sensorValue> milliseconds:
delay(sensorValue);
}else{
// turn the ledPin off:
digitalWrite(ledPin, LOW);
// stop the program for for <sensorValue> milliseconds:
delay(sensorValue);
}
}
