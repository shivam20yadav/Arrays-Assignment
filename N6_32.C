#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,sum;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the element of array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("the given sum:- ");
	scanf("%d",&sum);
	for(i=0;i<range;i++)
		for(j=i;j<range;j++)
			if((a[i] + a[j]) == sum)
				printf("\n%d + %d = %d",a[i],a[j],sum);

	getch();
}