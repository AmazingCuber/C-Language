#include<stdio.h>
int main()
{
int n,a,p,s=0;
printf("Enter a number:\n");
scanf("%d",&n);
a=n;
while(n>0)
{
p=n%10;
s=p+(s*10);
n=n/10;
}
if(s==a)
printf("The number is a palindrome\n");
else
printf("The number is not a palindrome\n");
return 0;
}