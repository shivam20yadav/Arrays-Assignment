#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,mul = 1;
	int i,j;
	clrscr();

	printf("enter the range of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i = 0;i < r;i++)
	{
		for(j = 0;j < r;j++)
		{
			if(i == j)
				continue;
			else
				mul *= a[j];
		}
		printf("%d ",mul);
		mul = 1;
	}
	getch();
}