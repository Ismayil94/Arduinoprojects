int LED = 13;
int i;

void setup(){
pinMode(LED,OUTPUT);
}

void loop(){
for(i=1;i<=10;i++){
  if(i<=5){
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(500);
}else{
    digitalWrite(LED,HIGH);
    delay(500);
    digitalWrite(LED,LOW);
    delay(2000);
 }
}

}
