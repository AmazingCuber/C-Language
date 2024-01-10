#include<stdio.h>
int main()
{
int n,a,b,r,s=0; //Limits of int are -32768 to 32767
printf("Enter a number:\n");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
s=r+(s*10)	;
n=n/10;
}
if(s==a)
printf("Number is a palindrome\n");
else
printf("Number is not a palindrome\n");
return 0;
}