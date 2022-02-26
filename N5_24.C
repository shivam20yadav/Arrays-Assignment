#include<conio.h>
#include<stdio.h>

void main()
{
	int i=1,num1;
	clrscr();
	printf("enter the number :- ");
	scanf("%d",&num1);
	for(;i<=10;i++)
		printf("%d * %d = %d\n",num1,i,i*num1);
	getch();
}