/*
Created By : Avantika 
Functionality : Perimeter and area of rectangle and circle
Functions Used : scanf, printf
Date : 13 Jan 2020
*/
#include<stdio.h>
void main()
{
    float length=0,breadth=0;
    float radius =0;
    printf("Enter the length of the rectangle");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle");
    scanf("%f",&breadth);
    // defining the area and perimeter of the rectangle
    float area_rect = 0, peri_rect = 0;
    area_rect = length * breadth;
    peri_rect = 2*(length + breadth);
    printf("\n\n The area of the rectangle is %f", area_rect);
    printf("\n\n The perimeter of the rectangle is %f",peri_rect);
    // defining the area and perimieter of the circle
    float area_circle =0;
    float peri_circle =0;
    printf("\nEnter the radius of the circle");
    scanf("%f",&radius);
    area_circle = 3.14 * radius * radius;
    peri_circle = 2*3.14*radius;
    printf("\n\n");
    printf("The perimieter of the given circle is %f",peri_circle);
    printf("\nThe area of the given circle is %f",area_circle);
    }
