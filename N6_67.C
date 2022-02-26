#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c,find;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *) malloc (r * sizeof(int));
	for(i=0;i<r;i++)
		a[i] = (int *) malloc (c * sizeof(int));
	printf("enter the value of matrix:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("enter the searching element:- ");
	scanf("%d",&find);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(a[i][j] == find)
				printf("element find at %d %d",i,j);

	getch();
}