#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,max=0,max2=0;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		max2 += a[i];
		if(max < max2)
			max = max2;
		if(max2 < 0)
			max2 = 0;
	}
	printf("%d",max);
	getch();
}