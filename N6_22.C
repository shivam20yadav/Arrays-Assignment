#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,**b,range,c,r;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r * sizeof(int));
	*b = (int *)malloc(r * sizeof(int));
	for(i=0;i<r;i++)
	{
		a[i] = (int *)malloc(c * sizeof(int));
		b[i] = (int *)malloc(c * sizeof(int));
	}
	printf("entre the element of the matrix:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			b[j][i] = a[i][j];
	printf("\nfirst matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\ntranspose matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	getch();
}