#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,c=0;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- ");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i=0;i<r;i++)
	{
		if(a[i] == a[i+1])
		{
			a[i] = a[i] * 2;
			a[i+1] = 0;
		}
	}
	for(i=0;i<r;i++)
	{
		if(a[i] == 0)
			continue;
		else
		{
			c += 1;
			printf("%d ",a[i]);
		}
	}
	for(i=c;i<r;i++)
		printf("0 ");
	getch();
}