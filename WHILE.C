#include<stdio.h>
int main()
{
int p,n,count;
float si,r;
count=1;
while(count<=3)
{
printf("Enter the values of p,n,r:\n");
scanf("%d %d %f",&p,&n,&r);
si=p*n*r/100;
printf("Simple interest=%f\n",si);
}
return 0;
}