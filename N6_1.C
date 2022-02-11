#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,sum=0;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<range;i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("sum of the array is:- %d\n",sum);
	printf("avg of the array is:- %d\n",sum/range);
	getch();
}