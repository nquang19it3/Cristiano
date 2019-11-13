// e.g about string - code by nguyenvanquan7826
#include <stdio.h>
 
int main() 
{
    // khai bao chuoi co toi da 50 ky tu
    char name[50]; 
    printf("Hi, What is your name? \nMy name is: ");
    gets(name);
    printf("ban that la dep trai!!", name);
 
    // khoi tao chuoi ngay khi khai bao
    char myLove[] = "linh duong lan ngoc";
    puts(myLove);
 
    return 0;
}
