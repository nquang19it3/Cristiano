#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,n;
    int a[50][50];
    printf("nhap so hang m="); scanf("%d",&m);
    printf("nhap so cot n="); scanf("%d",&n);
    printf("nhap vao ma tran:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
        	printf("Nhap a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("ma tran vua nhap la:\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int count=0;
    int x;
    printf("Nhap so muon kiem tra:");
    scanf("%d",&x);
    for(int i=1;i<=m;i++)
	{
    	for(int j=1;j<=n;j++)
		{
    		if(a[i][j]==x)
			{
    		count++;
    		printf("\ntrung o vi tri a[%d][%d]",i,j);
			}
		}
	}
	printf("\nCo %d phan tu trung voi %d",count,x);
	
}
