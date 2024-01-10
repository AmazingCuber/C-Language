#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("Enter the cost price and selling price:\n");
scanf("%d %d",&cp,&sp);
p=sp-cp;
l=cp-sp;
if(p>0)
printf("The vendor obtained a profit of %dRs\n",p);
if (l>0)
printf("The vendor suffered a loss of %dRs\n",l);
if(p==l)
printf("The vendor has neither obtained profit nor suffered a loss\n");
return 0;
}