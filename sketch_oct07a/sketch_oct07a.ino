//Percobaan 1
//Aksal Syah Falah

void setup() {
  // put your setup code here, to run once:
  for (int i=5; i<=13; i++){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pin=6; pin<=13; pin++){
    digitalWrite(pin, 1);
    delay(1000);
    digitalWrite(pin, 0);
  }
  for (int pin=12; pin>=7; pin--){
    digitalWrite(pin, 1);
    delay(1000);
    digitalWrite(pin, 0);
  }
}
