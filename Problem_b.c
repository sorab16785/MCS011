/*
The distance between 2 cities in km is input through the keyboard
Write a prgram to convert and print this distance in metres,feet,inches and centimetres.


*/

/*Conversion of distance*/


#include<stdio.h>
#include<conio.h>

void main()

{

float km,m,cm,ft,inch;

printf("\nEnter the Distance in kms :");
scanf("%f",&km);

m = km*1000;
cm = m*100;
inch = cm*2.54;
ft = inch*12;

printf("\nDistnace in metres = %f",m);
printf("\nDistance in centimetes = %f",cm);
printf("\nDistance in feet = %f",ft);
printf("\nDistance in inches = %f",inch);

printf("\n\n\n\n\nPress any key to exit........");

getch();




}