#include<stdio.h>
#include<conio.h>

void main()
{
	int i,f,t,comm,temp,temp2 = 0;
	clrscr();
	printf("first number of the G.P. serice:- ");
	scanf("%d",&f);
	printf("number or terms in G.P. serice:- ");
	scanf("%d",&t);
	printf("common ratio of G.P. serice:- ");
	scanf("%d",&comm);
	printf("%f ",(float)f);
	temp2 += (float)f;
	for(i=1;i<t;i++)
	{
		temp = f * 2;
		printf("%f ",(float)temp);
		temp2 += (float)temp;
		f = temp;
	}
	printf("\nsum of the G.P series:- %f",(float)temp2);
	getch();
}