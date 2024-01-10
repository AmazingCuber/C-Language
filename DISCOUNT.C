#include<stdio.h>
int main()
{
float dis,qnt,pri,total;
printf("Enter the quantity and price of each item:\n");
scanf("%f %f",&qnt,&pri);
if(qnt>1000)
{
dis=10;
printf("Discount=10 %\n");
}
else
dis=0;
total=(qnt*pri*(1-dis/100));
printf("Total expense=%f\n",total);
return 0;
}