#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,min,d;
	int i;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	min = a[0];
	d = a[1] - a[0];
	for(i = 1;i < r;i++)
	{
		if((a[i] - min) > d)
		{
			d = a[i] - min;
			printf("%d %d\n",min,a[i]);
		}
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	printf("%d ",d);
	getch();
}