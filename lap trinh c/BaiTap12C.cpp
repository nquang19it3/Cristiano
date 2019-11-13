#include<stdio.h>
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
	printf("\nTong la %d\n",s);
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];
	}
	printf("max=%d, min=%d",max,min);
	printf("\nMang sau khi loai bo phan tu am la:\n");
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
		printf("%d ",a[i]);
		}
	}
	printf("\nMang sau khi doi chieu la:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	int x;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			}
	printf("\nSap xep mang tang dan: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[j]==a[i])
			{
				for (int k=j; k<n; k++) 
				{
					a[k]=a[k+1];
					n--;
					j--;
				}
			}
		}
	}
	printf("\nMang sau khi xoa phan tu lap la:\n");
	for (int i=0;i<n;i++) 
	{
		printf("%d ",a[i]);
	}
	return 0;
 

}

