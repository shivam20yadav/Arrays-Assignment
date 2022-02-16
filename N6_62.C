#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,c1 = 0,c2 = 0;
	int i,j,largest=0,start=0,end=0;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	printf("enter the values of the array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=i;j<range;j++)
		{
			if(a[j] == 0)
				c1 += 1;
			if(a[j] == 1)
				c2 += 1;
			if(c2 == c1)
			{
			       if(largest<(j-i+1))
			       {
				  largest=j-i+1;
				  start=i;
				  end=j;
			       }
			}
		}
		printf("\nsub array:- %d %d %d",start,end,largest);

	}
	getch();
}