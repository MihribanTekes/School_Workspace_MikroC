void main() 

{
  trisd = 0b00000001;
  trisd = 0b00000010;
  portd=0;
  trisb= 0;
  portb=0;
  trisc=0;
  portc=0;
  
  while(1)
  {
    if(portd.rd0==1)
    {    while(portd.rd==1){
      portb=90;
      portc=0;
      delay_ms(500);
      portb =5;
      portc=10;
      delay_ms(500);
      portb=165;
      portc=0;
      delay_ms(500);
      portb=10;
      portc =5;
      delay_ms(500);

      }
      
    }
    
    if(portd.rd1==1)
    {
        while(portd.rd1==1)
      {
      portb=165;
      portc=0;
      delay_ms(500);
      portb=10;
      portc=5;
      delay_ms(500);
      portb=90;
      portc=0;
      delay_ms(500);
      portb=5;
      portc=10;
      delay_ms(500);
      }
    }
    
    portb=0;
    portc=0;
  
  }

}
