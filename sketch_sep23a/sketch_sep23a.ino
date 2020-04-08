//Input and Output
//pinMode -> Menentukan arah I/O
  //  pinMode(no_pin, OUTPUT);
    // no_pin => 0 - 13
      //digitalWrite (no_pin, HIGH); -> HIGH/1 = 5 Volt
      //digitalWrite (no_pin, LOW); -> LOW/0 = 5 Volt
      //analogWrite
  //  pinMode(no_pin, INPUT);
    // no_pin ANALOG => 0 - 13
    // no_pin DIGITAL => 0 - 13
      //digitalRead
      //analogRead
//digitalWrite
//analogWrite
//

void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite (13, 1);
  delay(500);
  digitalWrite (13, 0);
  delay(500);
  digitalWrite (2, 1);
  delay(500);
  digitalWrite (2, 0);
  delay(500);
  digitalWrite (3, 1);
  delay(500);
  digitalWrite (3, 0);
  delay(500);
  digitalWrite (4, 1);
  delay(500);
  digitalWrite (4, 0);
  delay(500);
  digitalWrite (5, 1);
  digitalWrite (6, 1);
  delay(500);
  digitalWrite (5, 0);
  digitalWrite (6, 0);
  delay(500);
}
