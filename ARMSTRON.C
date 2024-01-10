#include<stdio.h>
void main()
{
int n,a,b,c,sum,p;
n=1;
clrscr();
while(n<=500)
{
p=n;
sum=0;
a=p%10;
sum=sum+a*a*a;
p=p/10;
b=p%10;
sum=sum+b*b*b;
p=p/10;
c=p;
sum=sum+c*c*c;
if(sum==n)
printf("Angstrom number=%d\n",sum);
n++;
}
}


