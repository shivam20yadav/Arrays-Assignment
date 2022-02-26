#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c,sum=0;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r * sizeof(int));
	for(i=0;i<r;i++)
		a[i] = (int *)malloc(c * sizeof(int));
	printf("enter the value of the matrix:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(i < j)
				sum = sum + a[i][j];
	printf("\nsum: %d",sum);
	getch();
}