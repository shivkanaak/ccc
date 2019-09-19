#include<stdio.h>
#include<conio.h>

void main()
{

	int age;
	char g,s;
	clrscr();
	printf("Check if you are eligible for Insurance.\n\n Press'M' if you are married, if not press 'N'.\n");
	printf("Enter your Marital Status :  ");
	scanf("%c",&s);

	if (s=='M')
	{
		printf("You are eligible for Insurance.");
	}
	else
	{
		printf("Enter your Gender : ");
		scanf("\n%c", &g);
		printf("Enter your age : ");
		scanf("%d", &age);
		if(((g=='m')&&(age>=30))||((g=='f')&&(age>=25)))
		{
			printf("You are eligible for Insurance.");
		}
		else
		{

			printf("You are not Eligible for Insurance.");
		}

	}
	getch();
}