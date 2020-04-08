 // Konstanta
  #define C 2   // C = nama konstanta, 2 nilai dari konstanta

// Variabel
  float x = 7.3;
  int y = 4;
  int a = 1;
  int b;
  byte c;
  char d;

void setup() {
  // put your setup code here, to run once:
  //  b = y + a; // 4 + 1
  b = y / C - a;

  digitalWrite(2, HIGH);
  digitalWrite(2, 1);
  digitalWrite(2, HIGH);
  digitalWrite(2, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
