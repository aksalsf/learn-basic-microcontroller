/*
 * UTS project 2
 */
void setup() {
  // put your setup code here, to run once:
for(int i=13; i>=2; i--){
  pinMode(i, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(11,HIGH);
digitalWrite(2,HIGH);
digitalWrite(10,HIGH);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(2,LOW);
digitalWrite(10,LOW);
digitalWrite(7,LOW);
for (int a=1; a<=3; a++){
  digitalWrite(12,HIGH);
  digitalWrite(3,HIGH);
  delay(300);
  digitalWrite(12,LOW);
  digitalWrite(3,LOW);
  delay(300);
}
digitalWrite(13,HIGH);
digitalWrite(4,HIGH);
digitalWrite(8,HIGH);
digitalWrite(5,HIGH);
delay(1000);
digitalWrite(13,LOW);
digitalWrite(4,LOW);
digitalWrite(8,LOW);
digitalWrite(5,LOW);
for (int b=1; b<=3; b++){
  digitalWrite(9,HIGH);
  digitalWrite(6,HIGH);
  delay(300);
  digitalWrite(9,LOW);
  digitalWrite(6,LOW);
  delay(300);
}
}
