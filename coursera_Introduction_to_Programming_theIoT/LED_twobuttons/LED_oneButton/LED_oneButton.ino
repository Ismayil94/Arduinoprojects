int LED = 12;
int BUTTON = 4;

void setup(){
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
}

void loop(){
if(digitalRead(BUTTON) == HIGH){
digitalWrite(LED,HIGH);
}else{
digitalWrite(LED,LOW);
}
}
