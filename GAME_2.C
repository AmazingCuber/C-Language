#include<stdio.h>
int main()
{
int n,x,a,p=0;
n=21;
clrscr();

while(n>1)
{
printf("Enter 1,2,3 or 4 number of matchsticks you want to pick out of %d\n",n);
scanf("%d",&a);
n=n-a;
printf("Number of mathsticks remaining is %d\n",n);
if(a>4)
printf("Invalid entry\n");
else if(a==4)
{
p=1;
}
else if(a==3)
{
p=2;
}
else if(a==2)
{
p=3;
}
else if(a==1)
{
p=4;
}
printf("Computer chooses %d\n",p);
n=n-p;
if(n==1)
printf("__You Lost__\n");
}
return 0;
}
