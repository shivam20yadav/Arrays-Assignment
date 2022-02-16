#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,*b,r1,r2,count = 0;
	int i,j;
	clrscr();
	printf("enter the range of the array 1:- ");
	scanf("%d",&r1);
	a = (int *)malloc(r1 * sizeof(int));
	printf("enter the element of the array 1:- ");
	for(i=0;i<r1;i++)
		scanf("%d",&a[i]);
	printf("\nenter the range of the array 2:- ");
	scanf("%d",&r2);
	b = (int *)malloc(r2 * sizeof(int));
	printf("enter the element of the array 2:- ");
	for(i=0;i<r2;i++)
		scanf("%d",&b[i]);
	for(i=0;i<r1;i++)
		for(j=0;j<r2;j++)
			if(a[i] == b[j])
				count += 1;
	if(count == r2)
		printf("second array is the subset of the first array");
	else
		printf("not subset array");
	getch();
}