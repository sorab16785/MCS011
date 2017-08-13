/*
If the marks obtained by a student in 5 different subjects are input through the keyboard
Find out the aggresgate marks amd percantage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject as 100.


*/


/*
 Calculation of aggregate and Percentage Marks.
*/


#include<stdio.h>
#include<conio.h>

void main()

 {
	
	int m1,m2,m3,m4,m5,aggr;
	float per;
	
	printf("\nEnter the marks in 5 subjects :");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	aggr = (m1+m2+m3+m4+m5) ;
	
	per = aggr/5;
	
	
	printf("\nAggregate Marks = %d",aggr);
	printf("\nPercentage Marks = %f",per);
	
	printf("\n\n\n\n\n\nPress any key to exit......");
	
	
	getch();
	
	
	
	
	
}