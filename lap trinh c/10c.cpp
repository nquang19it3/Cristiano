#include<stdio.h>
main()
{
	int m=2;
	int k=1;
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	while (m>n)
	{
		m=m*k;
		k++;
		
	}
	printf("k=%d",&k);
	return 0;
}
