#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,r,l,m,k;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	k = a[0];
	l = 0;
	for(i = 0;i < r;i++)
	{
		if(k > l)
			m = k;
		else
			m = l;
		k = l + a[i];
		l = m;
	}
	if(k > l)
		printf("sum :- %d ",k - 1);
	getch();
}