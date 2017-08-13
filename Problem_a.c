/*Ramesh s basic salary is input through the keyboard .
His dearness allowance is 40% of basic salary
and house rent allowance is 20% of basic salary.
Write a program to calculate his gross salary.

*/


/*To calculate gross Salary of Ramesh*/

#include<stdio.h>
#include<conio.h>

void main() {

float bp,da,hra,grpay;


printf("\nEnter the basic pay of Ramesh : ");
scanf("%f",&bp);

da = 0.4 * bp;
hra = 0.2 * bp;
grpay = bp + da + hra;/* Gross pay = sum of basic pay and all allowances*/

printf("\nBasic Pay of Ramesh = %f",bp);
printf("\nDearness Allowance = %f",da);
printf("\nHouse Rent Allowance = %f",hra);
printf("\nGross pay of Ramesh is %f",grpay);

printf("\n\n\n\n\n\nPress any key to exit....");

getch();/*reads a character from keyboard*/

}

