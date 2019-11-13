#include<stdio.h>
#include<math.h>
main()
{
	float diem;
	printf("nhap diem:");
	scanf("%f",&diem);
	if(diem>=8)
	{
	printf("hoc sinh dat loai gioi");}
	if(diem>=7 && diem<8)
	{
	printf("hoc sinh dat loai kha");}
	else
	{
	  printf("hoc sinh thuoc loai trung binh");}
	return 0;
}
