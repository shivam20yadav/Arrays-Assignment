#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,max=1,maxm=1;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	printf("enter the elements of the array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		max *= a[i];
		if(maxm < max)
			maxm = max;
		if(max == 0)
			max = 1;
	}
	printf("%d",maxm);
	getch();
}