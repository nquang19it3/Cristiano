#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,j,m,n;
    int A[50][50];
    int B[50][50];
    int C[100][100];
    printf("nhap so hang m="); scanf("%d",&m);
    printf("nhap so cot n="); scanf("%d",&n);
    printf("nhap vao ma tran:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	printf("Nhap A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {                    	
			printf("Nhap B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("ma tran vua nhap la:\n");
    printf("Ma tran A\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran B\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("Ma tran tich C la:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        	C[i][j]=A[i][j]*B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
}
