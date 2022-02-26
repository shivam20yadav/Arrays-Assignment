#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,ans=0;
	int i,j;
	clrscr();
	printf("enter the size of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	printf("enter the diff:- ");
	scanf("%d",&ans);
	for(i=0;i<r;i++)
		for(j=0;j<r;j++)
			if((a[j] - a[i]) == ans)
				printf("(%d ,%d) ",a[i],a[j]);
	getch();
}