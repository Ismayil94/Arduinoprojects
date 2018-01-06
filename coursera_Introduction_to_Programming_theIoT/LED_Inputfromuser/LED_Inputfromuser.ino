
void setup(){
    char state;
    pinMode(13,OUTPUT);
    digitalWrite(13,LOW);
    
    Serial.begin(9600); // Initialize serial communications with the PC
}

void loop(){
   if(Serial.available() >0)
  {
  char state = Serial.read();
  
   if(state == '1'){
      digitalWrite(13,HIGH);
      Serial.println("It is on");
     }else if(state == '0'){
      digitalWrite(13,LOW);
      Serial.println("It is off");

 }
  }
}
