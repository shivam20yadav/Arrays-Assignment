#include<conio.h>
#include<stdio.h>

void main()
{
	int r,c,sum = 1,*a;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d %d",&r,&c);
	a = (int *)malloc(c * sizeof(int));
	for(i=1;i<c;i++)
		a[i] = 1;
	a[0] = 1;
	for(i = 0;i<r;i++)
	{
		for(j=1;j<c;j++)
		{
			a[j] += a[j-1];
		}
	}
	printf("%d",a[c-1]);
	getch();
}