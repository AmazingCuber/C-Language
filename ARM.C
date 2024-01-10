#include<stdio.h>
int main()
{
int n,a,temp,sum=0;
printf("Enter a number:\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
a=n%10;
sum=sum+a*a*a;
n=n/10;
}
if(sum==temp)
printf("%d is an armstrong number\n",temp);
else
printf("%d is not an armstrong number\n",temp);
return 0;
}