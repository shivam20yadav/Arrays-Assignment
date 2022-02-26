#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,temp;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	for(i = 0;i < r;i++)
		scanf("%d",&a[i]);
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = 0,j = r-1;i<r / 2;i++,j--)
	{
		printf("%d ",a[i]);
		printf("%d ",a[j]);
	}
	printf("%d",a[r/2]);
	getch();
}