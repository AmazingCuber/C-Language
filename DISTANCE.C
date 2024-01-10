#include<stdio.h>
int main()
{
float diskm,dism,disf,disi,disc;
printf("Enter the distance in km:");
scanf("%f",&diskm);
dism=diskm * 1000;
disf=diskm * 3280.84;
disi=diskm * 39370.1;
disc=diskm * 100000;
printf("Distance in meters=%f\n",dism);
printf("Distance in feet=%f\n",disf);
printf("Distance in inches=%f\n",disi);
printf("Distance in centi meters=%f\n",disc);
return 0;
}