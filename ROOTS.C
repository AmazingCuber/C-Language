#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float D,x,y;
printf("Enter the coeff. of x^2 and coeff of x and constant term:\n");
scanf("%d %d %d",&a,&b,&c);
D=sqrt(b*b-4*a*c);
x=(-b+D)/(2*a);
y=-1*(b+D)/(2*a);
printf("The roots are=%f,%f\n",x,y);
return 0;
}