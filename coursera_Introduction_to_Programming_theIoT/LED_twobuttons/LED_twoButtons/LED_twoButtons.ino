int LED = 12;
int BUTTON = 4;
int BUTTON_2 = 6;


void setup(){
pinMode(LED,OUTPUT);
pinMode(BUTTON,INPUT);
pinMode(BUTTON_2,INPUT);
}

void loop(){
if(digitalRead(BUTTON) == HIGH && digitalRead(BUTTON_2) == HIGH){
digitalWrite(LED,HIGH);
}else{
digitalWrite(LED,LOW);
}
}
