/*
Created By : Avantika 
Functionality : Conversion from Fahrenheit to Celcius
Functions Used : scanf, printf
Date : 13 Jan 2020
*/
#include<stdio.h>
void main()
{
    float temperature =0, temp_celcius = 0;
    printf("Enter the temperature for conversion in Fahrenheit");
    scanf("%f",&temperature);
    temp_celcius = (temperature - 32) * (5.0/9.0);
    printf("The temperature after conversion is %f",temp_celcius);
}
