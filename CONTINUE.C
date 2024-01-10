#include<stdio.h>
int main()
{
int i;
for(i=1;i<=100;i++)
{
if(i>=21&&i<=39)
continue;
if(i>=61&&i<=79)
continue;
/*if(i>=81&&i<=99)
continue;
*/
printf("i=%d\t",i);
}
return 0;
}