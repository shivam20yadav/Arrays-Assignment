#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,sum=0;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum of all element is:- %d",sum);
	getch();
}