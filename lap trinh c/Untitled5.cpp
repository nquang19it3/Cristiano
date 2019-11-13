#include<stdio.h>
#include<conio.h>
main()
{
int tonguoc(int a)

 int s = 1;
 for (int i = 2; i <= a; i++)
 if (a%i == 0)
  s += i;
 return s;
}

