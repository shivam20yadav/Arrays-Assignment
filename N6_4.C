#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,range;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	b = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
	{
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	printf("the elements in the first array are:\n");
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	printf("\nthe elements in the second array are:\n");
	for(i=0;i<range;i++)
		printf("%d ",b[i]);
	getch();
}