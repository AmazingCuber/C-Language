#include<stdio.h>
void main()
{
int n,a,p;
clrscr();
n=21;
while(n>1&&p>1)
{
printf("Enter 1,2,3 or 4 matchsticks you want to pick out of %d:\n",n);
scanf("%d",&a);
if(a>0 && a<=4)
{
p=n-a;
printf("Number of matchstick left=%d\n",p);
if(p>=10&&p<21)
{
printf("Computer chooses 4\n");
n=p-4;
}
else if(p==9)
{
printf("Computer chooses 3\n");
n=p-3;
}
else if(p==8)
{
printf("Computer chooses 2\n");
n=p-2;
}
else if(p==7)
{
printf("Computer chooses 1\n");
n=p-1;
}
else if(p==6)
{
printf("Computer chooses 1\n");
n=p-1;
}
else if(p==5)
{
printf("Computer chooses 4\n");
n=p-4;
printf("Number of matchstics left=%d\n",n);
printf("__YOU LOST__\n");
}
else if(p==4)
{
printf("Computer chooses 3\n");
n=p-3;
printf("Number of matchsticks left=%d\n",n);
printf("__YOU LOST__\n");
}
else if(p==3)
{
printf("Computer chooses 2\n");
n=p-2;
printf("Number of matchsticks left=%d\n",n);
printf("__YOU LOST__\n");
}
else if(p==2)
{
printf("Computer chooses 1\n");
n=p-1;
printf("Number of matchsticks left=%d\n",n);
printf("__YOU LOST__\n");
}
else if(p==1)
{
printf("Number of Matchsticks left=%d\n",n);
printf("__YOU WIN__\n");
}
}
else
printf("Invalid input\n");
}
}