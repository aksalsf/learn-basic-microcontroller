void setup() {
  // 7SEGMENT => 0 0 0 0 = pin1 pin2 pin3 pin4 | 0 0 0 1 = 1
  // LED Kendaraan
  // Merah = 13, Kuning = 12, Hijau = 11
  // LED Pejalan Kaki
  // Merah = 10, Hijau = 9
  // put your setup code here, to run once:
  for (int i=1; i<=4;i++){
    pinMode(i, OUTPUT);
    }
  for (int i=7; i<=13;i++){
    pinMode(i, OUTPUT);
    }
}

void nol() {
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  digitalWrite(1, 0);
  }

void satu(){
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  digitalWrite(1, 0);
  }

void dua(){
  digitalWrite(4, 0);
  digitalWrite(3, 1);
  digitalWrite(2, 0);
  digitalWrite(1, 0);
  }

void tiga(){
  digitalWrite(4, 1);
  digitalWrite(3, 1);
  digitalWrite(2, 0);
  digitalWrite(1, 0);
  }

void empat(){
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  digitalWrite(2, 1);
  digitalWrite(1, 0);
  }

void lima(){
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  digitalWrite(2, 1);
  digitalWrite(1, 0);
  }

void enam(){
  digitalWrite(4, 0);
  digitalWrite(3, 1);
  digitalWrite(2, 1);
  digitalWrite(1, 0);
  }

void tujuh(){
  digitalWrite(4, 1);
  digitalWrite(3, 1);
  digitalWrite(2, 1);
  digitalWrite(1, 0);
  }

void delapan(){
  digitalWrite(4, 0);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  digitalWrite(1, 1);
  }

void sembilan(){
  digitalWrite(4, 1);
  digitalWrite(3, 0);
  digitalWrite(2, 0);
  digitalWrite(1, 1);
  }

void lampuMerah() {
  sembilan();
  delay(500);
  delapan();
  delay(500);
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
  }

void lampuHijau(){
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
  }

void loop() {
  // put your main code here, to run repeatedly:
  int merahMobil = 13;
  int kuningMobil = 12;
  int hijauMobil = 11;
  int merahJalan = 10;
  int hijauJalan = 9;
  // Lampu Merah
  digitalWrite(merahJalan, 1);
  digitalWrite(hijauMobil, 1);
  lampuMerah();
  digitalWrite(kuningMobil, 1);
  delay(250);
  digitalWrite(kuningMobil, 0);
  digitalWrite(merahJalan, 0);
  digitalWrite(hijauMobil, 0);
  // Lampu Hijau
  digitalWrite(hijauJalan, 1); 
  digitalWrite(merahMobil, 1);
  lampuHijau();
  digitalWrite(kuningMobil, 1);
  delay(250);
  digitalWrite(hijauJalan, 0); 
  digitalWrite(merahMobil, 0);
  digitalWrite(kuningMobil, 0);
}
