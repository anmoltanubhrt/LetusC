/*
Created By : Avantika 
Functionality : Below code finds the aggregate marks given the individual marks of five subject
Functions Used : scanf, printf
Date : 13 Jan 2020
*/
#include<stdio.h>
void main()
{
float mark1=0,mark2=0,mark3=0,mark4=0,mark5=0;
printf("Enter the marks obtained in English");
scanf("%f",&mark1);
printf("Enter the marks obtained in Hindi");
scanf("%f",&mark2);
printf("Enter the marks obtained in Science");
scanf("%f",&mark3);
printf("Enter the makrs obtained in Computers");
scanf("%f",&mark4);
printf("Enter the makrs obtained in Computers");
scanf("%f",&mark5);
// Finding the aggregate
float aggregate=0;
float percentage = 0;
aggregate = (mark1+mark2+mark3+mark4+mark5);
percentage = (aggregate / 500.0 )* 100;
printf("\nThe aggregate marks obtained are %f",aggregate);
printf("\n the percent marks obtained are %f",percentage);
}


