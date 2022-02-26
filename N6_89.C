#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r * sizeof(int));
	for(i=0;i<r;i++)
		for(j = 0;j < c;j++)
			a[i] = (int *)malloc(c * sizeof(int));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j] == 1)
			{
				for(k=j;k<c;k++)
					if(a[i][k] != 1)
			}
		}
	}
	getch();
}