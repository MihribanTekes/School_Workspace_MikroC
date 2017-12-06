
void bekle()
{
   delay_ms(10);
}

int topla (char sayi1, char sayi2)
  {
     return(sayi1+sayi2);
  }
  




void main() 
{  char sayi1,sayi2;
   trisb  =0;
   portb  = 0;
   trisc = 1;
   portc = 0;
   trisd =1;
   portd  = 0;
   while(1)
   {
   sayi1 = portc;
   sayi2 = portd;
   bekle();
   portb = topla(sayi1,sayi2);

   bekle();

   portb = 0;
   }

}
