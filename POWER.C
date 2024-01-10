#include<stdio.h>
int main()
{
int b,i;
float a,power;
printf("Enter the number and its power:\n");
scanf("%f %d",&a,&b);
i=power=1;
while(i<=b)
{
power=power*a;
i++;
}
printf("The power of the number=%f\n",power);
return 0;
}
