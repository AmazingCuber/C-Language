#include<stdio.h>
#include<math.h>
int fact(int);
int cos(int num,int count)
{
int i,exp=0,sign=1;
for(i=0;i<count;i=i+2)
{
exp=exp +(sign)*pow(num,(i))/fact(i);
sign=sign * (-1);
}
return exp;
}
int fact(int n)
{
int fac=1;
while(n>0)
{
fac=fac*n;
n--;
}
return fac;
}
int main()
{
int n,rad,i;
float val,ans;
printf("Enter the degree:");
scanf("%d",&n);
printf("Enter the number of terms:");
scanf("%d",&i);
rad=n*(3.14159/180.0);
ans=cos(rad,i);
printf("cos %d = %0.2f",n,ans);
return 0;
}