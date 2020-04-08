#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

byte pakmen[8] = {
  0b00000,
  0b01110,
  0b11011,
  0b11110,
  0b11100,
  0b11111,
  0b01110,
  0b00000};

byte cengcenglonceng[8] = {
  0b00100,
  0b01110,
  0b01110,
  0b01110,
  0b11111,
  0b00000,
  0b00010,
  0b00000};
byte lonlonlonceng[8] = {
  0b00100,
  0b01110,
  0b01110,
  0b01110,
  0b11111,
  0b00000,
  0b01000,
  0b00000};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, pakmen);
  lcd.createChar(1, cengcenglonceng);
  lcd.createChar(2, lonlonlonceng);}

void loop() {

//PERTAMA. -/- UAS MIKRO1 -/- | M 3 1 1 9 0  4 4
  lcd.setCursor(2, 0);
  lcd.write(byte(0)); 
  lcd.print(" HAE GUYS! ");
  lcd.write((byte)0);
  lcd.setCursor(0, 1);
  lcd.print(" BANGUN! MULUNG! ");
  delay(1500);
  

//KEDUA. MWAH GESER KEDIP SAYANG :*
  for (int kugeser = 0; kugeser < 16; kugeser++) {
    lcd.scrollDisplayLeft();  //kiri sayang :*
    delay(1000); }
    
  for (int kaugeser = 0; kaugeser < 32; kaugeser++) {
    lcd.scrollDisplayRight(); //kanan sayang :*
    delay(1000);}
    
  for (int kitageser = 0; kitageser < 16; kitageser++) {
    lcd.scrollDisplayLeft();  //kiri lagi mwah :*
     delay(1000);}
        
  //KEDIP NIH... :)
  lcd.display();   delay(1000);
  lcd.noDisplay(); delay(1000);
  lcd.display();   delay(1000);
  lcd.noDisplay(); delay(1000);
  lcd.display();   delay(1000);
  lcd.noDisplay(); delay(1000);
  lcd.display();   delay(1000);

//KETIGA. DETIK WITH LOPE-LOPE MWAH :*
  lcd.clear(); delay(900);
  lcd.setCursor(6,0);
  lcd.print("[");     
  lcd.setCursor(7,0);
  lcd.print("0 ");  
  lcd.setCursor(9,0);
  lcd.print("]");    
  lcd.setCursor(0, 1);
  lcd.print("BANGUN!  MULUNG!");
  delay(1000);

  //OKE MARI BERHITUNG :)
  for(int i=1; i<61; i++){
      if(i%2==0)
        {lcd.setCursor(5,0); lcd.write((byte)1); 
         lcd.setCursor(10,0); lcd.write((byte)1);}
         else
        {lcd.setCursor(5,0); lcd.write((byte)2); 
         lcd.setCursor(10,0); lcd.write((byte)2);}
         
  lcd.setCursor(7,0);
  lcd.print(i);
  delay(1000); }
  delay(500);

}
