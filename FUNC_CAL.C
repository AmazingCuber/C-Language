#include<stdio.h>
void fact();
int main()
{
fact();
return 0;
}
void fact()
{
int n,i,fac=1;
printf("Enter the number: ");
scanf("%d",&n);
i=n;
while(n>0)
{
fac=fac*n;
n--;
}
printf("Factorial of %d is %d\n",i,fac);
}