#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {

	char n;
	printf("nhap vao chu cai tu a-z or A-Z:");
	scanf("%c",&n);

	switch(n)
	{
		case 'nguyen tu dien':printf("ban rat dep trai");break;
		case 'b':printf("basic");break;
		case 'c':printf("COBOL");break;
		case 'd':printf("dBASE III");break;
		case 'f':printf("Fortran ");break;
		case 'p':printf("Pascal");break;
		case 'v':printf("Visua C++");break;
		case 'A':printf("Ada");break;
		case 'B':printf("basic");break;
		case 'C':printf("COBOL");break;
		case 'D':printf("dBASE III");break;
		case 'F':printf("Fortran ");break;
		case 'P':printf("Pascal");break;
		case 'V':printf("Visua C++");break;
		default:
 	printf("khong co thong diep nao trong danh sach \n");
 	break;
	}
	
	return 0;
}
