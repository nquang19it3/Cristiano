#include<stdio.h>
#include<math.h>
main(){
	float a,b,c;
	printf("Nhap canh a=");
	scanf("%f",&a);
	printf("Nhap canh b=");
	scanf("%f",&b);
	printf("Nhap canh c=");
	scanf("%f",&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)&&(a>0)&&(b>0)&&(c>0)){
		printf("a,b,c la 3 canh cua mot tam giac\n");
		if((a==b)&&(b==c))
				printf("Tam giac deu");
		else	
		 if((a==b)||(b==c)||(a==c))
				printf("Tam giac can");
		else		
		 if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
				printf("Tam giac vuong");
		else		
		 if((a*a==b*b+c*c)&&(c==b)||(b*b==a*a+c*c)&&(a==c)||(c*c==a*a+b*b)&&(a==b))
				printf("Tam giac vuong can");
	}
	else{
		printf("a,b,c khong phai la 3 canh cua mot tam giac");
	}
}

