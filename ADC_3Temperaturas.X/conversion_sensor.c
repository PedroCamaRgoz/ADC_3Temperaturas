/*
 * File:   conversion_sensor.c
 * Author: Pedro
 *
 * Created on 3 de Julho de 2021, 18:46
 */


#include <xc.h>
#include "Analog_to_Digital.h"


int var_value = 0;

unsigned int celsius_value (void)
{
    var_value = adc_value();
    var_value  = (var_value * 0.0977517) - 50;  
    
    int celsius_value = var_value;
  
    return(celsius_value);    
}

unsigned int kelvin_value (void)
{ 
    
    int kelvin_value = var_value + 273;
    
    return(kelvin_value);
}

unsigned int Fahrenheit_value (void)
{
    int Fahrenheit_value = (var_value * 1.8)+32 ;
    
    return(Fahrenheit_value);   
}
