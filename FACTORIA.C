#include<stdio.h>
int main()
{
int n,i,mul;
printf("Enter a number:\n");
scanf("%d",&n);
mul=1;
i=n;
while(n>0)
{
mul=mul*n;
n--;
}
printf("The factorial of %d is %d\n",i,mul);
return 0;
}