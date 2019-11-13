#include<stdio.h>

main(){
	int n,count=0;
	printf("Nhap n= ");
	scanf("%d",n);
	while(n>=10)	{
		n/=10;
		count++;
	}
	printf("so chu so cua n: %d",count);
	return 0;
}
