#include<stdio.h>
void main()
{
float bs,hra,da,ga;
printf("Enter the basic salary:\n");
scanf("%f",&bs);
if(bs<1500)
{
hra=10*bs/100;
da=90*bs/100;
}
else
{
hra=500;
da=98*bs/100;
}
ga=bs+hra+da;
printf("The gross salary=%f\n",ga);
}
