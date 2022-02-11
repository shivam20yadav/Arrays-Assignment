#include<conio.h>
#include<stdio.h>
void main()
{
	int *a,range,pos;
	int i;
	clrscr();
	printf("entet the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	printf("enter the elemetn of the array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("enter the position:- ");
	scanf("%d",&pos);
	for(i=pos;i<range;i++)
		a[i-1] = a[i];
	for(i=0;i<range-1;i++)
		printf("%d ",a[i]);
	getch();
}