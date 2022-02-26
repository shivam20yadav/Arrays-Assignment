#include<conio.h>
#include<stdio.h>

void main()
{
	int num,i=1;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&num);
	for(;i<=num;i++)
	printf(" Number is : %d and cube of the %d is: %d\n",i,i,i*i*i);
	getch();
}