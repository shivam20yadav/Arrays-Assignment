#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	printf("enter the element of the array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		if(a[i] == 0)
		{
			for(j=i+1;j<range;j++)
				a[j-1] = a[j];
			a[range] = 0;
		}
	}
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	getch();
}