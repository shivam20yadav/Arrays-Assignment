#include<stdio.h>
#include<conio.h>

void main()
{
	int *a,range,count = 0;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range * sizeof(int));
	printf("\nenter the elemente of the array:- \n");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	for(i=0;i<range;i++)
	{
		for(j=i;j<range;j++)
			if(a[i] == a[j])
				count +=1;
		if(count > 2 && count % 2 != 0)
			printf("the element odd number of times is %d\n",a[i]);
		count = 0;
	}
	getch();
}