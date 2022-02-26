#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,range,temp,t1 = 0,t2 = 0;
	int i,j;
	clrscr();
	a = (int *)malloc(range - 1 * sizeof(int));
	b = (int *)malloc(range - 1 * sizeof(int));
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	for(i=0;i<range;i++)
	{
		printf("enter the value:- ");
		scanf("%d",&temp);
		if(temp % 2 == 0)
		{
			a[t1] = temp;
			t1 += 1;
		}
		else
		{
			b[t2] = temp;
			t2 += 1;
		}
	}
	for(i=0;i<t1;i++)
		printf("%d ",a[i]);
	for(i=0;i<t2;i++)
		printf("%d ",b[i]);
	getch();
}