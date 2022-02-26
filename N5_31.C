#include<conio.h>
#include<stdio.h>

void main()
{
	int r;
	int i,j,k;
	clrscr();
	printf("enter the value:- ");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		if(i == 0)
		{
			printf("*");
			for(j = 0;j < (r * 2) - 3;j++)
				printf(" ");
			for(j = 0;j < r;j++)
				printf("* ");
			printf("\n");
		}
		if(i > 0 && i < (r*2)/2 - 1)
		{

			printf("*");
			for(j=0;j<r*2 - 3;j++)
				printf(" ");
			printf("*\n");
		}
		if(i == (r * 2) / 2 - 1)
			for(j=0;j<r*2-1;j++)
				printf("* ");
		if(i == (r * 2) / 2 - 1)
		{
			printf("\n");
			for(j=0;j < r - 2;j++)
			{
				for(k = 1;k < (r * 2) - 1;k++)
					printf(" ");
				printf("*");
				for(k = 1;k < (r * 2) - 2;k++)
					printf(" ");
				printf("*\n");
				if(j == r - 3)
				{
					for(j=0;j<r;j++)
						printf("* ");
					for(j = 0;j < (r * 2)-4;j++)
						printf(" ");
					printf("*");
				}
			}

		}
	}
	getch();
}