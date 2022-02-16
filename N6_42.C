#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,range,flag = 1,min = 0,minm = 99;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the element of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=0;j<range;j++)
			if(i == a[j])
				flag = 0;
		if(flag == 1)
			min = i;
		if(min<minm && flag == 1)
			minm = min;
		flag = 1;
	}
	printf("the missing smallest element is:- %d",minm);
	getch();
}