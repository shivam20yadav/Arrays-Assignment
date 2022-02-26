#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c,flag = 0;
	int *bu;
	int i,j,k;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r * sizeof(int));
	bu = (int *)malloc(c * sizeof(int));
	for(i=0;i<r;i++)
		a[i] = (int *)malloc(c * sizeof(int));

	printf("enter the value of the matrix:- ");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=1;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[0][j]);
		for(j=0;j<c;j++)
			bu[j] = a[i][j];
		for(k=1;k<r;k++)
		{
			for(j=0;j<c;j++)
			{
				if(bu[j] == a[k][j])
				{
					flag += 1;
				}

			}
		}
		flag = 0;
	}
	getch();
}