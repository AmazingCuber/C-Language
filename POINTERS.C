#include<stdio.h>
void swap(int *,int *);
int main()
{
int a,b;
printf("\nEnter values of a and b:");
scanf("%d %d",&a,&b);
printf("\nActual values = %d %d",a,b);
swap(&a,&b);
printf("\nSwapped values using pointers = %d %d",a,b);
return 0;
}
void swap(int *x,int *y)
{
int temp;
temp = *x;
*x = *y;
*y=temp;
}