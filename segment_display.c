char i, sayilar[10] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7c, 0x07, 0x7f, 0x6f};

void kurulum()
{
  TRISB = 0;
  PORTB = 0;
}
 void main()
 {
   kurulum();

   for(i=0; i<10; i++)
    {
    PORTB = sayilar[i];
    delay_ms(500);
    }

 }
