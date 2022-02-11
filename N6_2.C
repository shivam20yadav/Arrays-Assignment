#include<conio.h>
#include<stdio.h>
void main()
{
	int *a,range;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("normal order\n");
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	printf("\nin revrse order\n");
	for(i=range-1;i>=0;i--)
		printf("%d ",a[i]);
	getch();
}