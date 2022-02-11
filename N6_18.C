#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c;
	int i,j;
	clrscr();
	printf("entet the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r*sizeof(int));
	for(i=0;i<r;i++)
		a[i] =(int *)malloc(c*sizeof(int));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	getch();
}