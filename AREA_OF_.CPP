#include<stdio.h>
#include<conio.h>

#define PI 3.141

void main()
{
	clrscr();
	float r,A;
	printf("Enter radius of circle : ");
	scanf("%f",&r);

	A = PI*(r*r);
	printf("Area of Circle is = %f", A);
	getch();
}
