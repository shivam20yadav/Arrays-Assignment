#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*temp,range,pos;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the element of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	printf("\nenter the position:- ");
	scanf("%d",&pos);
	temp = (int *)malloc(pos*sizeof(int));
	for(i=0;i<=pos;i++)
	{
		temp[i] = a[i];
		a[i] = a[i+pos];
	}
	printf("\nfrom %d postion values of the array are:-",pos);
	for(i=0;i<range-pos;i++)
		printf(" %d ",a[i]);
	for(i=range-pos,j=0;i<range;i++,j++)
		a[i] = temp[j];
	printf("\nafter rotating from %d postion the array is:- \n");
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	getch();
}