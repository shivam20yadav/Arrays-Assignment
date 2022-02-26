#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,r1,r2,t1,t2,med;
	int i;
	clrscr();
	printf("enter the range of the array 1 and array 2:- ");
	scanf("%d %d",&r1,&r2);
	a = (int *) malloc (r1 * sizeof(int));
	b = (int *) malloc (r2 * sizeof(int));
	printf("enter the value of array 1:- \n");
	for(i=0;i<r1;i++)
		scanf("%d",&a[i]);
	printf("\nenter the value of array 2:- \n");
	for(i=0;i<r2;i++)
		scanf("%d",&b[i]);
	if(r1 % 2 == 0)
		t1 = (a[r1/2] + a[r2/2-1])/2;
	else
		t1 = a[r1/2];
	if(r2 % 2 == 0)
		t2 = (b[r2/2] + b[r2/2-1])/2;
	else
		t2 = b[r2/2];
	med = (t1 + t2) / 2;
	printf("\n the median of the 2 sorted array is :- %d",med);
	getch();
}
