#include< reg51.h>

sbit led0=P1^0; //Led connected to port-1 pin#0
sbit led1=P1^1;
sbit led2=P1^2;
sbit led3=P1^3;
sbit led4=P1^4;
sbit led5=P1^5;
sbit led6=P1^6;
sbit led7=P1^7;
void delay()
{
int count=0;
 while(count!=250)
  {
   TMOD=0x01;  //16-bit timer0 selected
   TH0=0xF8;   // Loading high byte in TH
   TL0=0xCC;   // Loaded low byte in TL
   TR0=1;      // Running the timer
    while(!TF0);   //Checking the timer flag register if it is not equal to 1 
   TR0 = 0;      // If TF0=1 stop the timer
   TF0 = 0;      // Clear the Timer Flag bit for next calculation

   count++;
  }

}

void main()
{
P1=0x00;   //Port-1 Declared Output

while(1)     // Constantly  running while loop.
{
led0=1;    // LED glows here
delay();  // Delay for 1 second 
led0=0;    // LED switch off
delay();  // Delay for 1 second
led1=1;    // LED glows here
delay();  // Delay for 1 second 
led1=0;    // LED switch off
delay();  // Delay for 1 second
led2=1;    // LED glows here
delay();  // Delay for 1 second 
led2=0;    // LED switch off
delay();  // Delay for 1 second
led3=1;    // LED glows here
delay();  // Delay for 1 second 
led3=0;    // LED switch off
delay();  // Delay for 1 second
led4=1;    // LED glows here
delay();  // Delay for 1 second 
led4=0;    // LED switch off
delay();  // Delay for 1 second
led5=1;    // LED glows here
delay();  // Delay for 1 second 
led5=0;    // LED switch off
delay();  // Delay for 1 second
led6=1;    // LED glows here
delay();  // Delay for 1 second 
led6=0;    // LED switch off
delay();  // Delay for 1 second
led7=1;    // LED glows here
delay();  // Delay for 1 second 
led7=0;    // LED switch off
delay();  // Delay for 1 second
}

}