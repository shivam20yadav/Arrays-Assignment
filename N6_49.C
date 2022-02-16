#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,count = 0,flag = 1;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=0;j<range;j++)
			if(a[i] == a[j])
				count +=1;
		if(count > (range / 2))
		{
			printf("%d is majority elements in the given array\n",a[i]);
			flag = 0;
		}
		count = 0;
		a[i] = 0;
	}
	if(flag == 1)
		printf("\nthere is no majority element in the given array\n");
	getch();
}