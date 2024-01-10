#include<stdio.h>
int main()
{
float a,b,sum,diff,mul,div;
printf("Enter the values of a and b");
scanf("%f %f",&a,&b);
sum = a+b;
diff = a-b;
mul = a*b;
div = a / b;
printf("sum=%f\n",sum);
printf("difference=%f\n",diff);
printf("multiplicarion=%f\n",mul);
printf("division=%f\n",div);
return 0;
}
