/*
The length and breath of a Rectangle and radius of a circle are input through the Keyboard
Write a program to calculate the area and primeter of the rectangle and the area and circumference of the circle.

*/


/* Calculation area and perimeter of rectangle and circle */

#include<stdio.h>
#include<conio.h>


void main() {
	
	int l,b,area1,perimeter;
	float area2,circum,r;
	
	printf("\nEnter the length and breath of the rectangle");
	scanf("%d%d",&l,&b);
	area1 = l*b; /* Area of a rectangle*/
    perimeter = 2*l+2*b;  /* Perimeter of a rectangle*/
	
	printf("\nArea of the rectangle = %d",area1);
	printf("\nPerimeter of the rectangle = %d",perimeter);
	
	printf("\nEnter the radius of the circle ");
	scanf("%f",r);
	
	area2 = (3.14)*r*r; /* Area of a circle*/
	circum = 2*(3.14)*r;  /* circumference of a circle*/
	
	printf("\nArea of the circle = %f",area2);
	printf("\nCircumference of the circle = %f",circum);
	
	printf("\n\n\n\n\nEnter any key to exit......");
	
	getch();
	
	
	
	
}