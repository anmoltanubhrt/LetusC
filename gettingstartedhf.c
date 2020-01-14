/*
Created By : Avantika 
Functionality : Interchanging contents
Functions Used : scanf, printf
Date : 13 Jan 2020
*/
#include<stdio.h>
void main()
{
    int numA=0,numB=0;
    printf("Enter the value of A");
    scanf("%d",&numA);
    printf("Enter the value of B");
    scanf("%d",&numB);
    // defning a temp variable
    int temp=0;
    printf("\n\n The value of A and B as entered by user are %d %d",numA,numB);
    temp=numA;
    numA=numB;
    numB=temp;
    printf("\n\n");
    printf("The value of A and B after interchanging values are %d %d",numA,numB);

}
