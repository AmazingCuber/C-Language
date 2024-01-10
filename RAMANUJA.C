#include<stdio.h>
int main()
{
int a,b,i,key;
for(i=1;i<=30000;i++)
{
key=0;
for(a=1;a<=30000;a++)
{
for(b=1+a;a*a*a+b*b*b<=30000;b++)
{
if(a*a*a+b*b*b==30000)
{
key++;
a++;
}
}
}
}
if(key==2)
printf("%d is an angstrom number",i);

return 0;
}