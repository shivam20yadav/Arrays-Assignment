#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,count = 0,finder;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the element of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("enter the number:- ");
	scanf("%d",&finder);
	for(i=0;i<range;i++)
		if(finder == a[i])
			count++;
	printf("%d appears more than %d times in the given array",finder,count);
	getch();
}