#include<stdio.h>
#include<conio.h>

void main()
{
	int num,i,j,temp = 1,k = 0;
	int arr[100];
	clrscr();
	printf("enter the number:- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i % j == 0)
			{
				temp = 0;
			}
		}
		if(temp != 0)
		{
			arr[k] = i;
			k++;
		}
		temp = 1;
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(arr[i] + arr[j] == num)
				printf("%d + %d = %d\n",arr[i],arr[j],arr[i]+arr[j]);
		}
		arr[i] = 0;
	}
	getch();
}