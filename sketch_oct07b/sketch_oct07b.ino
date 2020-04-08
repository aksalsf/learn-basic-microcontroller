//Percobaan 2
void setup() {
  // put your setup code here, to run once:
  for (int i=6; i<=13; i++){
    pinMode(i, OUTPUT);
    }

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x=6; x<=9;){
    for (int y=13; y>=10; y--) {
      digitalWrite(x, 1);
      digitalWrite(y, 1);
      delay(1000);
      digitalWrite(x, 0);
      digitalWrite(y, 0);
      x++;
      }
    }
  for (int x=8; x>=7;){
    for (int y=11; y<=12; y++) {
      digitalWrite(x, 1);
      digitalWrite(y, 1);
      delay(1000);
      digitalWrite(x, 0);
      digitalWrite(y, 0);
      x--;
      }
    }
}
