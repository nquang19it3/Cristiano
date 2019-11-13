#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	printf("nhap vao a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	if (a >= b && a >= c)
	{
		printf("max=%f",a);
	}else if(b>=a && b>=c)
	{
		printf("max=%f",b);
	}
	else 
	{
		printf("max=%f",c);
	}
	
   
}
