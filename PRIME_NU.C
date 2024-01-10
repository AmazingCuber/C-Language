#include<stdio.h>
int main()
{
int i,a,isPrime=0;
clrscr();
printf("Enter a number:\n");
scanf("%d",&a);
for(i=2;i<fa;i++)
{
if(a % i == 0)
isPrime++;
}
if(isPrime==0)
printf("%d is a prime number\n",a);
else
printf("%d is not a prime number\n",a);
return 0;
}