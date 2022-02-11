#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,**b,r,c;
	int i,j;
	clrscr();
	printf("entet the row and col for both matrix:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r*sizeof(int));
	*b = (int *)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	{
		a[i] = (int *)malloc(c*sizeof(int));
		b[i] = (int *)malloc(c*sizeof(int));
	}
	printf("enter the element of matrix 1:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("\nenter the element of matrix 2:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	printf("\nsum of the matrix is:- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j] + b[i][j]);
		printf("\n");
	}
	getch();
}