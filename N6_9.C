#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,temp;
	int i,j;
	clrscr();
	printf("entet the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	printf("enter the elemetn of the array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i] < a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("maximum element:- %d\nminimum element:- %d",a[range-1],a[0]);
	getch();
}