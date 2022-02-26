#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,count = 0;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *) malloc (range * sizeof(int));
	printf("enter the value of array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=0;j<range;j++)
		{
			if(a[i] == a[j])
			{
				count += 1;
			}
		}
		if(count < 2)
		{
			printf("%d ",a[i]);
		}
		count = 0;
	}
	getch();
}