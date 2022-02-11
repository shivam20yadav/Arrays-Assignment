#include<conio.h>
#include<stdio.h>
void main()
{
	int *a,range;
	int i;
	clrscr();
	printf("entet the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	printf("enter the elemetn of the array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("the even element are:\n");
	for(i=0;i<range;i++)
		if(a[i] % 2 == 0)
			printf("%d ",a[i]);
	printf("\nthe odd element are:\n");
	for(i=0;i<range;i++)
		if(a[i] % 2 != 0)
			printf("%d ",a[i]);
	getch();
}