#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,flag = 0;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=1;i<range;i++)
	{
		for(j=0;j<range;j++)
		{
			if(i == a[j])
			{
				flag = 1;
			}
		}
		if(flag == 0)
			printf("%d number is missing",i);
		flag = 0;
	}
	getch();
}