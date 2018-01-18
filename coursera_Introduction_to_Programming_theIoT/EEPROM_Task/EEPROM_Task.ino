#include <EEPROM.h>
void setup() {
Serial.begin(9600);
}
int address;
int dataToWrite;

void loop() {
String buffer = "";
buffer = Serial.readString();
if(buffer.startsWith("read")) {
address = buffer.substring(buffer.indexOf(' ') +1).toInt();
Serial.print("ready to read from address: ");
Serial.print(address);
Serial.println();
Serial.println(EEPROM.read(address)); 
} else if(buffer.startsWith("write")) {
address = buffer.substring(6,7).toInt();
dataToWrite = buffer.substring(8).toInt();
Serial.print("ready to write: ");
Serial.print(dataToWrite);
Serial.println();
Serial.print("to address: ");
Serial.print(address);
Serial.println();
EEPROM.write(address,dataToWrite); 
}
}

