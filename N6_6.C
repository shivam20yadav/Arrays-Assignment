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
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("the unique elements found in the array are: \n");
	for(i=0;i<range;i++)
	{
		for(j=0;j<range;j++)
			if(a[i] == a[j] && i != j)
				break;
		if(j == range)
			printf("%d ",a[i]);
	}
	getch();
}