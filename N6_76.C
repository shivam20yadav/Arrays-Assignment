#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,range,temp,max,count=0;
	int i,j;
	clrscr();
	printf("enter the range of the array: -");
	scanf("%d",&range);
	a = (int *) malloc (range * sizeof(int));
	b = (int *) malloc (range * sizeof(int));
	printf("enter the value of the array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	max = 0;
	for(i=0;i<range;i++)
	{
		temp = a[i];
		while(temp != 0)
		{
			temp /= 10;
			count+= 1;
		}
		b[i] = count;
		if(count >  max)
			max = count;
		count = 0;
	}
	for(i=0;i<range;i++)
	{
		if(b[i] < max)
		{
			temp = a[i];

		}
	}
	getch();
}