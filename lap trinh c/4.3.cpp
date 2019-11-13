#include<stdio.h>
#include<conio.h>
int i, n;
int tong=1;
int main()
{
	printf("Nhap vao gia tri n: ");
	scanf("%d", &n);
	for(i=2;i<=n;i++)
	{ if(n%i==0)
	tong+=i;}
	printf("tong la: %i", tong);
	return 0;}
