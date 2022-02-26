#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,min=99,flag = 0;
	int i,j;
	clrscr();
	printf("enter the size of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i=0;i<r;i++)
		if(a[i] < min)
			min = a[i];
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if((min + 1) == a[j])
			{
				flag += 1;
				min += 1;
			}
			printf("%d %d ",min,flag);
		}
	}
	if(flag == r - 1)
		printf("yes");
	else
		printf("no");
	getch();
}