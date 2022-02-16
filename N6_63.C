#include<conio.h>
#include<stdio.h>

void main()
{
	int a[] = {7,5,8,9,6,8,5,7,4,6};
	int range=10,max = 0,exe;
	int i,j,k;
	clrscr();
	/*printf("enter the size of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("enter the elements of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);*/
	max = a[0];
	exe = 0;
	for(i=0;i<range;i++)
	{
		if(a[i] > max)
		{
			for(j=exe;j<i;j++)
			{
				a[j] = a[i];
			}
			exe = i;
			max = a[i];
		}
	}
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	getch();
}