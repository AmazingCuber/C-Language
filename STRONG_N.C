#include<stdio.h>
int main()
{
int n,a,sum,fact=0,temp;
printf("Enter a number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
a=n%10;
sum=1;
while(a>0)
{
sum=sum*a;
a--;
}
fact=fact+sum;
n=n/10;
}
if(fact==temp)
{
printf("%d is a strong number\n",temp);
}
else
{
printf("%d is not a strong number\n",temp);
}
return 0;
}