#include<stdio.h>
main(){
	int n,dem=1;
	printf("Nhap n= ");
	scanf("%d",&n);
	while(n>=10){
		n=n/10;
		dem+=1;
	}
	printf("n co %d chu so",dem);
	return 0;
}
