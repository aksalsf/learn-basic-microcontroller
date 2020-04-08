//Percobaan 3
void setup() {
  // put your setup code here, to run once:
  for (int i=6; i<=13; i++){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int a=13; a>=11; ){
    for (int b=12; b>=10; ){
      for (int c=6; c<=8; ){
        for (int d=7; d<=9; d+=2){
          digitalWrite(a, HIGH);
          digitalWrite(b, HIGH);
          digitalWrite(c, HIGH);
          digitalWrite(d, HIGH);
          delay(1000);
          digitalWrite(a, LOW);
          digitalWrite(b, LOW);
          digitalWrite(c, LOW);
          digitalWrite(d, LOW);
          a-=2;
          b-=2;
          c+=2;
  }}}}
  for (int a=13; a<=13; ){
    for (int b=12; b<=13; ){
      for (int c=11; c<=13; ){
        for (int d=10; d<=10; ){
          for (int e=9; e>=9; ){
            for (int f=8; f>=6; ){
              for (int g=7; g>=6; ){
                for (int h=6; h>=6;h-- ){
                  digitalWrite(a, HIGH);
                  digitalWrite(b, HIGH);
                  digitalWrite(c, HIGH);
                  digitalWrite(d, HIGH);
                  digitalWrite(e, HIGH);
                  digitalWrite(f, HIGH);
                  digitalWrite(g, HIGH);
                  digitalWrite(h, HIGH);
                  delay(1000);
                  digitalWrite(a, LOW);
                  digitalWrite(b, LOW);
                  digitalWrite(c, LOW);
                  digitalWrite(d, LOW);
                  digitalWrite(e, LOW);
                  digitalWrite(f, LOW);
                  digitalWrite(g, LOW);
                  digitalWrite(h, LOW);
                  a++; b++; c++; d++; e--; f--; g--;
 }}}}}}}}
 delay(1000);
}
