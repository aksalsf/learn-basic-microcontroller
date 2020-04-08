void setup() {
  // put your setup code here, to run once:
  for (int i=13; i>=10; i--){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pin=13; pin>=10; pin--){
    for (int turun=1; turun<= 5; turun++){
    digitalWrite(pin, 1);
    delay(100);
    digitalWrite(pin, 0);
    delay(100);
    }
  }
  for (int pin=11; pin<=12; pin++){
    for (int naik=1; naik<= 5; naik++){
    digitalWrite(pin, 1);
    delay(100);
    digitalWrite(pin, 0);
    delay(100 );
    }
  }
  
}
