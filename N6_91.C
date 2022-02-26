#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,s=0,e;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- ");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i=0;i<r;i++)
	{
		if(a[i] < a[i+1])
		{
			e = i;
		}
		e = 0;
	}
	printf("%d",e);
	getch();
}