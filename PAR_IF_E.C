#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5;
float per;
printf("Enter the five subject marks:\n");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m3+m4+m5)*100/500;
if(per>=60)
printf("First division\n");
else if(per>=50&&per<60)
printf("Second division\n");
else if(per>=40&&per<50)
printf("Third division\n");
else
printf("Fail\n");
return 0;
}