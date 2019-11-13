#include<stdio.h>
main(){
	int x1=0,x2=1,x3,n;
	printf("Nhap so phan tu cua day n= ");
	scanf("%d",&n);
	printf("\n%d %d",x1,x2);
	for(int i=2;i<=n;i++)
	{
	x3=x1+x2;
	printf(" %d",x3);
	x1=x2;
	x2=x3;
	}
}
