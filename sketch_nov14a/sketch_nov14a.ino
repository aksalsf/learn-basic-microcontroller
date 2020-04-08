/*
 * UTS project 3
 */
/*
 * 7Segment BCD
 * 1 2 4 8
 * D0-->4
 * D1-->5
 * D2-->6
 * D3-->7
 */
void setup() {
  // put your setup code here, to run once:
for(int i=13; i>=4; i--){
pinMode(i, OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
digitalWrite(9,HIGH);
sembilan();
delapan();
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
//lampu kuning
digitalWrite(12,HIGH);
nol();
digitalWrite(12,LOW);

digitalWrite(11,HIGH);
nol();
digitalWrite(11,LOW);
//lampu kuning
digitalWrite(12,HIGH);
nol();
digitalWrite(10,LOW);
digitalWrite(12,LOW);
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

void delapan(){
//8
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(700);
}

void sembilan(){
//9
digitalWrite(4, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(700);
}
