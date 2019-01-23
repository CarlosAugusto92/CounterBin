/*Este programa realiza un conteo en binario del 0 al 15
 Carlos Augusto Pérez Méndez.
 mendezd.carlos@gmail.com
 Ingeniería Mecatrónica.
 Técnico de pruebas en Flextronics.
 */


#include "Alteri.h"



void main (void)
{
    TRISD = 0x00;
    while (1)
    {
         PORTD = 0b00000000;  //0.
         delay_ms(500);       //Espera 500 ms.
         PORTD = 0b00000001;  //1.
         delay_ms(500);
         PORTD = 0b00000010;  //2.
         delay_ms (500);
         PORTD = 0b00000011;  //3.
         delay_ms(500);
         PORTD = 0b00000100;  //4.
         delay_ms(500);
         PORTD = 0b00000101;  //5.
         delay_ms(500);
         PORTD = 0b00000110;  //6.
         delay_ms(500);
         PORTD = 0b00000111;  //7.
         delay_ms(500);
         PORTD = 0b00001000;  //8.
         delay_ms(500);
         PORTD = 0b00001001;  //9.
         delay_ms(500);
         PORTD = 0b00001010;  //10.
         delay_ms(500);
         PORTD = 0b00001011;  //11.
         delay_ms(500);
         PORTD = 0b00001100;  //12.
         delay_ms(500);
         PORTD = 0b00001101;  //13.
         delay_ms(500);
         PORTD = 0b00001110;  //14.
         delay_ms(500);
         PORTD = 0b00001111;  //15.
         delay_ms(500);
       }    
   
    
  
}
