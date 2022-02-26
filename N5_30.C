#include<conio.h>
#include<stdio.h>

void main()
{
	int i,range;
	float num = 1;
	clrscr();
	printf("Enter the range:- ");
	scanf("%d",&range);
	for(i=2;i<=range;i++)
	{
		num += (float)1/i;
	}
	printf("%f",num);
	getch();
}