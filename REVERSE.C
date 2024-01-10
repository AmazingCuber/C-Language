#include<stdio.h>
int main()
{
int n,d1,d2,d3,d4,rev;
printf("Enter a 4-digit number:\n");
scanf("%d",&n);
d1=n/1000;
n=n%1000;
d2=n/100;
n=n%100;
d3=n/10;
n=n%10;
d4=n/1;
rev=d1+10*d2+100*d3+1000*d4;
printf("The reverse of the number=%d\n",rev);
return 0;
}