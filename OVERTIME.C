#include<stdio.h>
int main()
{
int i=1,hrs;
float otpay;
while(i<=10)
{
printf("Enter no. of hours worked:\n");
scanf("%d",&hrs);
if(hrs>40)
otpay=(hrs-40)*120;
else
otpay=0;
printf("Overtime pay of the employee is %f",otpay);
i=i++;
}
return 0;
}