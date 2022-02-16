#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=0;j<range;j++)
			if((a[i] + a[j]) < 1  && (a[i] + a[j]) > -3)
				printf("[ %d %d]\n",a[i],a[j]);
		a[i] = 0;
	}
	getch();
}