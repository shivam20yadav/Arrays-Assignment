#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,temp,val;
	int i,j,k;
	clrscr();
	printf("entet the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc((range+2)*sizeof(int));
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
	printf("enter the value to be inserted:- ");
	scanf("%d",&val);
	for(i=0;i<range;i++)
	{
		if(a[i] > val)
		{
			for(j=range-1;j>=i-1;j--)
				a[j+1] = a[j];
			a[i] = val;
			break;
		}
	}
	for(i=0;i<range+1;i++)
		printf("%d ",a[i]);
	getch();
}