#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,count = 0,num,max = 0;
	int i,j;
	clrscr();
	printf("enter the row and col:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the value of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	for(i=0;i<r;i++)
	{
		for(j = 0;j < r;j++)
		{
			if(a[i] == a[j])
				count += 1;
		}
		if(count > max)
		{
			num = a[i];
			max = count;
		}
		count = 0;
	}
	printf("%d %d",num,max);
	getch();
}