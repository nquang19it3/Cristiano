#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M1,M2,M3;
	double avg;
	printf("\nNhap diem M1: ");
	scanf("%d",&M1);
	printf("\nNhap diem M2: ");
	scanf("%d",&M2);
	printf("\nNhap diem M3: ");
	scanf("%d",&M3);
	avg= (double)(M1+M2+M3)/(double)3;
    printf("diem trung binh la %3.2f \n",avg);
	if (avg >=90) printf("xep loai cua hoc vien la E+ \n ");
    if (80<=avg && avg <90) printf("xep loai cua hoc vien la E \n");
    if (70<=avg && avg <80) printf("xep loai cua hoc vien la A+ \n");
    if (60<=avg && avg <70) printf("xep loai cua hoc vien la A \n");
    if (50<=avg && avg <60) printf("xep loai cua hoc vien la B+ \n");
    if (avg <50) printf("xep loai cua hoc vien la ROT");
	return 0;	
}
