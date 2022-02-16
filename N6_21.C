#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,**b,**mul,r,c;
	int i,j,k;
	clrscr();
	printf("entet the row and col both matrix:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r*sizeof(int));
	*b = (int *)malloc(r*sizeof(int));
	*mul = (int *)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
	{
		a[i] = (int *)malloc(c * sizeof(int));
		b[i] = (int *)malloc(c * sizeof(int));
		mul[i] = (int *)malloc(c * sizeof(int));
	}
	printf("enter the value matrix 1:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("\nenter the value matrix 2:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)
			{
				mul[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",mul[i][j]);
		printf("\n");
	}
	getch();
}