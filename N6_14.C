#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,val,pos;
	int i;
	clrscr();
	printf("entet the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc((range+3)*sizeof(int));
	printf("enter the elemetn of the array:-\n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("enter the value and pos:- ");
	scanf("%d %d",&val,&pos);
	for(i=range;i>=pos;i--)
		a[i+1] = a[i];
	a[pos] = val;
	for(i=0;i<range+1;i++)
		printf("%d ",a[i]);
	getch();
}