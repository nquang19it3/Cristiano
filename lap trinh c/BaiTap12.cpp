#include<stdio.h>
#include<math.h>
main(){
	int n;
	int a[n];
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int s=0;
	for(int i=0;i<n;i++)
	{
		s+=a[i];
	}
		printf("Tong la %d\n",s);
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max ) max=a[i];
		if(a[i]<min ) min=a[i];

	}
	
	printf("max=%d\n",&max);
	printf("min=%d\n",&min);
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		--a[i];
	}
	printf("Mang sau khi xoa phan tu am la\n ");
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=%d",&a[i]);
	}
	for(int i=n;0<i&i<n;i++)
	{
		printf("Mang sau khi dao la \n a[%d]=%d",&i,&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j]==a[i]){
				for(int k=j;k<n;k++){
					a[k]=a[k+1];
					n--;
					j--;
				}
			}
		}
	}
	printf("\nmang sau khi xoa la\n");
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=%d",&i,&a[i]);
	}
	
	return 0;
}
