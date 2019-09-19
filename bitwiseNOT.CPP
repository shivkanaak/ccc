#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;                    // Declaration
	clrscr();                     // clear screen after use

	printf("Enter value of a : ");  // Dymanic initialisation.
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);

	c=a|b;             // Applying bitwise OR

	printf("Result is : %d | %d = %d",c);  // showing answer

	getch();  // func. here used for holding the screen.

}