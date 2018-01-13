int sensorPin = A0; // select the input pin for the potentiometer
int ledPin = 13; // select the pin for the LED
int sensorValue; // variable to store the value coming from the sensor

void setup() {
// declare the ledPin as an OUTPUT:
Serial.begin(9600);
pinMode(sensorPin,INPUT);
pinMode(ledPin, OUTPUT);

}

void loop() {
// read the value from the sensor:
sensorValue = analogRead(sensorPin);
// turn the ledPin on
Serial.print(sensorValue+1000000);

}
