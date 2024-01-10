#include<stdio.h>
int main()
{
int n,a,b,c,y;
printf("Enter a 3 digit number:\n");
scanf("%d",&n);
a=n/100;
n=n%100;
b=n/10;
n=n%10;
c=n/1;
y=a+b+c;
printf("sum:%d+%d+%d=%d",a,b,c,y);
return 0;
}