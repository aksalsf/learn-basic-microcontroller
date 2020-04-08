void setup() {
  // put your setup code here, to run once:
  for (int i=13; i>=4; i--){
    pinMode(i, OUTPUT);
    }
}

void nol() {
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  }

void satu(){
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  }

void dua(){
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  }

void tiga(){
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  }

void empat(){
  digitalWrite(10, 0);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  }

void lima(){
  digitalWrite(10, 0);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  }

void enam(){
  digitalWrite(10, 0);
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  }

void tujuh(){
  digitalWrite(10, 0);
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  }

void countdown(){
  tujuh();
  delay(500);
  enam();
  delay(500);
  lima();
  delay(500);
  empat();
  delay(500);
  tiga();
  delay(500);
  dua();
  delay(500);
  satu();
  delay(500);
  nol();
  delay(500);
  }
  
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, 1);
  digitalWrite(5, 1);
  countdown();
  digitalWrite(12, 1);
  delay(250);
  digitalWrite(12, 0);
  digitalWrite(13, 0);
  digitalWrite(5, 0);
  delay(250);
  digitalWrite(11, 1);
  digitalWrite(6, 1);
  delay(1000);
  nol();
  digitalWrite(11, 0);
  digitalWrite(6, 0);
  delay(250);
}
