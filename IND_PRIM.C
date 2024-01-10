#include<stdio.h>
int main()
{
int n,a=1,count=0;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
while(a<=n)
{
if(n%a==0)
{
count++;
}
a++;
}
if(count==2)
printf("%d is a perfect number\n",n);
else
printf("%d is not a perfect number\n",n);
return 0;
}