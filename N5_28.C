#include<conio.h>
#include<stdio.h>
void main()
{
	int num,i,j,range,temp = 0,temp2 = 0;
	clrscr();
	printf("enter the range:- ");
	scanf("%d",&range);
	for(i=0;i<range;i++)
	{
		for(j=0;j<=i;j++)
		{
			temp = (temp * 10) + 1;
		}
		printf("%d ",temp);
		temp2 += temp;
		temp = 0;
	}
	printf("\nthe sum is:- %d",temp2);
	getch();
}