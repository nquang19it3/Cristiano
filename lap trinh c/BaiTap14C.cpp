#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,n;
    int a[100][100];
    printf("nhap n="); scanf("%d",&n);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("Nhap a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
	}
	printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran sau khi doi la:\n");
     for(i=0;i<n;i++)
    {	
			 a[i][j]=a[j][i];

        for(j=0;j<n;j++)
        {
        	
            printf("%d ",a[j][i]);
        }
        printf("\n");
	}
}
