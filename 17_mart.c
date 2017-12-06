void main() {

    trisb = 1;
    trisc =0;   //output
    portb =0;
    portc=0;
    portb.B0 = 1;
    while(1)
    {
    portb.B0 = 1;
    delay_ms(500);
    if( portb.B0 == 0)           // if giriþlerin kontrolü için kullanýlýr     hangi pinden deger okutmak istiyosak o pini giriþ yap
    {
       delay_ms(500);
       portc = 0b11111111;
       delay_ms(500);
    }
    
    else
    {
           delay_ms(500);
           portc = 0;
           delay_ms(500);
           portb.B0 = 0;
    }
    
    
    delay_ms(500);
    portc = 0b00000000;
    delay_ms(500);
    
    }

}
