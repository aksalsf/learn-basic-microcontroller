/*
 * UTS M3119007
 */
/*
 * 7Segment BCD
 * 1 2 4 8
 * D0-->7
 * D1-->8
 * D2-->9
 * D3-->10
 */
void setup() {
  // put your setup code here, to run once:
for(int i=13; i>=3; i--){
pinMode(i, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
tujuh();
enam();
lima();
empat();
tiga();
dua();
satu();
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
nol();
delay(700);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
}

void nol(){
//0
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(700);
}

void satu(){
//1
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(700);
}

void dua(){
//2
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(700);
}

void tiga(){
//3
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
delay(700);
}

void empat(){
//4
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(700);
}

void lima(){
//5
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(700);
}

void enam(){
//6
digitalWrite(4, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(700);
}

void tujuh(){
//7
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, LOW);
delay(700);
}
