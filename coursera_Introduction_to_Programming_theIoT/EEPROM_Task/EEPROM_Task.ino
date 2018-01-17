#include <EEPROM.h> 
int addrNumber;
int lenAddr;
int valueNumber; 
String sInput; 
String sAddr; 
String sValue;
 void setup() 
 { 
 Serial.begin(9600); 
 Serial.println("\n\n type <read address> or <write address value>\n"); 
 }
  void loop()
   { while (Serial.available()>0) 
   { sInput = Serial.readString();
    if (sInput.startsWith("read")){ 
    sInput.remove(0,5);
     addrNumber=sInput.toInt(); 
     Serial.print("The value in ");
      Serial.print(addrNumber); 
      Serial.print(" is "); 
      Serial.println(EEPROM.read(addrNumber)); } 
      if (sInput.startsWith("write")) { 
      sInput.remove(0, 6); 
      lenAddr=sInput.indexOf(' '); 
      sAddr=sInput.substring(0,lenAddr);
      addrNumber=sAddr.toInt(); 
      sValue=sInput.substring(lenAddr);
      valueNumber=sValue.toInt();
      EEPROM.write(addrNumber,valueNumber); 
      Serial.print("I wrote "); 
      Serial.print(valueNumber); 
      Serial.print(" in ");
      Serial.println(addrNumber); 
      } 
      }

   }


