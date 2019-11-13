#include<stdio.h>
#include<conio.h>
#
main()
{
	int n;
	printf("nhap n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("nhap lai n");
	}
	for (int i=1,i<=n,i++)
	{
		if (n%i==0)
		{
			printf("i",&i);
		}
	}
}
