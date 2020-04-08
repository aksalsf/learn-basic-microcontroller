void setup() {
  // put your setup code here, to run once:
  for (int i=7; i<=13; i++){
    pinMode(i, OUTPUT);
    }
}

void nol() {
  digitalWrite(13, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(7, 0);
  delay(200);
}

void satu(){
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  delay(200);
}

void dua(){
  digitalWrite(13, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 0);
  digitalWrite(10, 1);
  digitalWrite(9, 1);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  delay(200);
}

void tiga(){
  digitalWrite(13, 1);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 1);
  delay(200);
}

void empat(){
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  delay(200);
}

void lima(){
  digitalWrite(13, 1);
  digitalWrite(12, 0);
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  digitalWrite(9, 0);
  digitalWrite(8, 1);
  digitalWrite(7, 1);
  delay(200);
}

void satu(){
  digitalWrite(13, 0);
  digitalWrite(12, 1);
  digitalWrite(11, 1);
  digitalWrite(10, 0);
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(7, 0);
  delay(200);
}


void loop() {
  // put your main code here, to run repeatedly:
  empat();
  satu();
  nol();
  lima();
  dua();
  tiga();
}
