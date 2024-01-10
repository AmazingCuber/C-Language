#include<stdio.h>
int main()
{
int year;
printf("Enter a year:\n");
scanf("%d",&year);
if((year%400==0&&year%4==0&&year%100==0)||(year%4==0&&year%100!=0))
printf("Year %d is a leap year\n",year);
else
printf("Year %d is NOT a leap year\n",year);
return 0;
}