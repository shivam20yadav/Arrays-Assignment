#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,len,max=0;
	int i,j,k;
	clrscr();
	printf("enter the range of the array:- ");
	scanf("%d",&r);
	printf("enter the value of the array:- ");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	printf("enter the length of the subarray:- ");
	scanf("%d",&len);
	for(i=0;i<r;i++)
	{
		for(j=i;j<len;j++)
		{
			for(k=j;k<len;k++)
			{
				if(a[k]>max)
				{
					max = a[k];
				}

			}
			printf("%d ",a[j]);
		}
		printf("--> %d",max);
		len += 1;
		max = 0;
		if(r+1 == len)
			break;
		printf("\n");
	}
	getch();
}