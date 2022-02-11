#include<conio.h>
#include<stdio.h>
void main()
{
	int *a,range,count=0;
	int i,j	;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
		for(j=i+1;j<range;j++)
			if(a[i] == a[j])
				count += 1;
	printf("total number of duplicate elements found in array:- %d",count);
	getch();
}