#include<stdio.h>
int main()
{
int yos,sal=0,qual;
char gender;
printf("Enetr the gender(m or f), years of service and qualification(pg=0;g=1)");
scanf("%c %d %c",&gender,&yos,&qual);
if(gender=='m'&&yos>=10&&qual==0)
sal=11000;
else if(gender=='m'&&yos>=10&&qual==1)
sal=10000;
else if(gender=='m'&&yos<10&&qual==0)
sal=10000;
else if(gender=='m'&&yos<10&&qual==1)
sal=7000;
else if(gender=='f'&&yos>=10&&qual==0)
sal=12000;
else if(gender=='f'&&yos>=10&&qual==1)
sal=9000;
else if(gender=='f'&&yos<10&&qual==0)
sal=10000;
else if(gender=='f'&&yos<10&&qual==1)
sal=6000;
printf("salary=%d\n",sal);
return 0;
}