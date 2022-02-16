#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,range,count = 0;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("the repeating elements are: ");
	for(i = 0;i<range;i++)
	{
		for(j=i;j<range;j++)
			if(a[i] == a[j])
				count += 1;
		if(count > 1)
			printf(" %d",a[i]);
		count = 0;

	}
	getch();
}