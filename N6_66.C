#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i=1;i<r-2;i++)
		for(j=i+1;j<r;j++)
			printf("(%d %d) ",a[i],a[j]);
	getch();
}