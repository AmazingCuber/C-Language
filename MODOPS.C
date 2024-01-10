#include<stdio.h>
int main()
{
int a=16,b=12;
b=a++ + b--;
a=++a+b--;
a=a+++b--;
printf("Values of a and b=%d,%d",a,b);
return 0;
}
