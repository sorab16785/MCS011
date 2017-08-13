/*
Temperature of a city in Fahrenheit is input through Keyboard
Write a program to convert this to centigrade degrees.

*/


/*
Conversion of temperature from Fahrenheit to Centigrade
*/


#include<stdio.h>
#include<conio.h>


void main(){
	
	float fr,cent;
	
	printf("\nEnter temperature in (F)  :");
	scanf("%f",&fr);
	cent = 5.0/9.0 * (fr-32); 	/* °C  x  9/5 + 32 = °F */
	
	
	printf("\nTemperature in Centigrade = %f",cent);
	
	printf("\n\n\n\nPress any key to Exit....");
	
	getch();
	
	
	
	
	
	
}