#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,*b,*c,range1,range2,temp = 1,t;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range1);
	a = (int *)malloc(range1 * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range1;i++,temp++)
		scanf("%d",&a[i]);
	printf("\nenter the range of the array 2:-\n");
	scanf("%d",&range2);
	b = (int *)malloc(range2 * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range2;i++)
		scanf("%d",&b[i]);
	printf("\nfirst array:- \n");
	for(i=0;i<range1;i++)
		printf("%d ",a[i]);
	printf("\nsecond array:- \n");
	for(i=0;i<range2;i++)
		printf("%d ",b[i]);
	c = (int *)malloc((range1+range2) * sizeof(int));
	for(i=0;i<range1;i++)
		c[i] = a[i];
	for(i=0;i<range2;i++,temp++)
		c[temp] = b[i];
	for(i=0;i<temp;i++)
	{
		for(j=0;j<i;j++)
		{
			if(c[i] < c[j])
			{
				t = c[i];
				c[i] = c[j];
				c[j] = t;
			}
		}
	}
	printf("\n");
	for(i=0;i<temp-1;i++)
		printf("%d ",c[i]);
	getch();
}