/*
Owner : Avantika
Functionality : Code does conversion of units from km to inches, meters, feet and centimeter
Date : 14 January 2020
*/
#include<stdio.h>
void main()
{
    float distance_in_kms=0,distance_in_meters=0,distance_in_feet=0,distance_in_inches =0,distance_in_cms =0;
    printf("Enter the distance betweeen city A and city B in kms");
    scanf("%f",&distance_in_kms);
    distance_in_meters = distance_in_kms * 1000;
    distance_in_feet = distance_in_kms * 3280.84;
    distance_in_inches = distance_in_kms * 39370.078740157;
    distance_in_cms = distance_in_kms * 1000 * 100;
    printf("Distance in meters is %f",distance_in_meters);
    printf("\n");
    printf("Distance in feet is %f",distance_in_feet);
    printf("\n");
    printf("Distance in centimeters is %f",distance_in_cms);
    printf("\n");
    printf("Distance in inches is %f",distance_in_inches);
}
