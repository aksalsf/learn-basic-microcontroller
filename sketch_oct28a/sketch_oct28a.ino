void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(7, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  //Kondisi Aawal sudah jelas, hanya untuk digital
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // SPDT
  if (digitalRead(7) == HIGH) {
    digitalWrite(10, 1);
    } else {
      digitalWrite(10, 0);
      }
  // SPST
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, 0);
    } else {
      digitalWrite(13, 1);
      } 
}
