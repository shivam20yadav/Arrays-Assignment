#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,temp;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the range of the array:- ");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	srand(time(0));
	for(i=0;i<r;i++)
	{
		j = rand() % r;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for(i=0;i<r;i++)
		printf("%d ",a[i]);
	getch();
}