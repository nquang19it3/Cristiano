#include<stdio.h>
main(){
	int n,tram,chuc,dv;
	printf("Nhap so nguyen duong gom 3 chu so: ");
	scanf("%d",&n);
	tram=n/100;
	chuc= ((n%100)/10);
	dv=n%10;
	printf("chu so hang tram la %d\nchu so hang chuc la %d\nchu so hang don vi la %d",tram,chuc,dv );
	return 0;
}
