#include<stdio.h>
int fact();
int main()
{
int c;
c=fact();
printf("Factorial=%d",c);
return 0;
}
int fact()
{
int n=5,fac=1;
while(n>0)
{
fac=fac*n;
n--;
}
return fac;
}