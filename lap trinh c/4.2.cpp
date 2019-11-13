#include <stdio.h>
#include <conio.h>
int demsouoc(int a)
{
int i, souoc=0;
for(i=1;i<=a;i++)
if(a%i==0)souoc++;
return souoc;
}
int main()
{
int n, x;
printf("\nNhap mot so nguyen:");
scanf("%d",&n);
x=demsouoc(n);
printf("So uoc %d\n",x);
getch();
}
		
	
	
	
