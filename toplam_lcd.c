
  // Lcd pinout settings
sbit LCD_RS at RB0_bit;   // lcd rs, b portunun dorduncu pinine baglanmis
sbit LCD_EN at RB1_bit;
sbit LCD_D7 at RB5_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D4 at RB2_bit;

// Pin direction
sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D7_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB2_bit;

       int sayi1 =3, sayi2=4, toplam;
      char txt[10];

void main() 
{
  LCD_Init();
  LCD_out(1,2,"Mihriban");
  toplam = sayi1+sayi2;
  IntToStr(toplam,txt);
  LCD_out(1,6,txt);
  
  
  
  
  
  

}
