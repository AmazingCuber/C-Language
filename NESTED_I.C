#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the values of a,b,c,d:\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b&&a>c&&a>d)
printf("a is greater than b,c,d\n");
else if(b>a&&b>c&&b>d)
printf("b is greater than a,c,d\n");
else if(c>a&&c>b&&c>d)
printf("c is greater than a,b,d\n");
else
printf("d is greater than a,b,c\n");
return 0;
}