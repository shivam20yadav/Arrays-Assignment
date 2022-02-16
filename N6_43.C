#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,*b,range,temp=0;
	int i,j;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&range);
	a = (int *)malloc(range*sizeof(int));
	b = (int *)malloc((range*2)*sizeof(int));
	printf("enter the element of the array:- ");
	for(i=0;i<range;i++)
		scanf("%d",&a[i]);
	printf("the given array:- ");
	for(i=0;i<range;i++)
		printf("%d ",a[i]);
	for(i=0;i<range;i++)
	{
		for(j = i;j<range;j++)
		{
			if(a[j] > a[i])
			{
				printf("\nnext bigger element of %d in the array is: %d",a[i],a[j]);
				b[temp] = a[j];
				temp += 1;
				break;
			}
		}
	}
	b[temp] = -1;
	printf("\nnext bigger element of %d in the array is: %d\n",a[range-1],-1);
	for(i=0;i<temp+1;i++)
		printf("%d ",b[i]);
	getch();
}