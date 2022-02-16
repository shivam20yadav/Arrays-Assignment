#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,temp;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc((range+1) * sizeof(int));
	printf("enter the elements of the array:- ");
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
	a[range] = a[0];
	printf("the given array is:- ");
	for(i=1;i<range+1;i++)
		printf("%d ",a[i]);
	printf("\nthe minimum element in the above array:- %d",a[0]);
	getch();
}