/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 3 de Julho de 2021, 23:42
 */


#include "config.h"
#include  <xc.h>
#include "delay.h"
#include "Analog_to_Digital.h"
#include "library_shelf.h"

void main(void)
{
    print.init();
    adc_init();
    
    print.str_position(0,0,  " C     K     F  ");
    
    while(1)
    {
          print.number(1, 0, (signed)  value.celsius   (),3);
          print.number(1, 6, (signed)  value.kelvin    (),3);
          print.number(1, 12,(signed)  value.Fahrenheit(),3);
    }
    
}
