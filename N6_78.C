#include<conio.h>
#include<stdio.h>

void main()
{
	int *a,r,sum;
	int i,j,k,l;
	clrscr();
	printf("enter the size of the array:- ");
	scanf("%d",&r);
	a = (int *)malloc(r * sizeof(int));
	printf("enter the element of the array:- \n");
	for(i=0;i<r;i++)
		scanf("%d",&a[i]);
	printf("enter the sum :- ");
	scanf("%d",&sum);
	for(i=0;i<r;i++)
	{
		for(j=i+1;j<r;j++)
			for(k=j+1;k<r;k++)
				for(l=k+1;l<r;l++)
					if((a[i] + a[j] + a[k] + a[l]) == sum)
						printf("%d + %d + %d + %d = %d\n",a[i],a[j],a[k],a[l],sum);
		a[i] = 0;

	 }
	 getch();
}