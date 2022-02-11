#include<stdio.h>
#include<conio.h>
void main()
{
	int *a,*b,range,count;
	int i,j;
	clrscr();
	printf("Enter number of size of the array:- ");
	scanf("%d", &range);
	a = (int *)malloc(range*sizeof(int));
	b = (int *)malloc(range*sizeof(int));
	printf("Enter the elements of array:\n");
	for(i=0;i<range;i++)
	{
		scanf("%d", &a[i]);
		b[i] = -1;
	}
	for(i=0;i<range;i++)
	{
		count = 1;
		for(j=i+1;j<range;j++)
		{
			if(a[i] == a[j])
			{
				count++;
				b[j] = 0;
			}
		}
		if(b[i] != 0)
			b[i] = count;
	}
	printf("\nthe frequency of all elements of array:\n");
	for(i=0;i<range;i++)
		if(b[i] != 0)
			printf("%d occurs %d times\n", a[i],b[i]);
	getch();
}