#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,*c,range,count = 0;
	int i,temp,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	b = (int *)malloc(range * sizeof(int));
	c = (int *)malloc((range * 2) * sizeof(int));
	printf("enter the elements of the array a:- \n");
	for(i=0;i<range;i++,count+=1)
	{
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
	printf("enter the elements of the array b:- \n");
	for(i=0;i<range;i++,count+=1)
	{
		scanf("%d",&b[i]);
		c[count] = b[i];
	}
	for(i=0;i<range*2;i++)
	{
		for(j=0;j<i;j++)
		{
			if(c[i] > c[j])
			{
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	for(i=0;i<range*2;i++)
		printf("%d ",c[i]);
	getch();
}