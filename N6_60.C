#include<conio.h>
#include<stdio.h>

void main()
{
	int **a,r,c,count = 0,maxm = 0,row = 0;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	*a = (int *)malloc(r * sizeof(int));
	for(i = 0;i < r;i++)
		a[i] = (int *)malloc(c * sizeof(int));
	printf("enter the values of 2d array:- \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]  ==  1)
				count +=1;
		}
		if(maxm < count)
		{
			maxm = count;
			row = i;
		}
		count = 0;
	}
	printf("the index of with 1s is %d and 1s are",row.maxm);
	getch();
}
