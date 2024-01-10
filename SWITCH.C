#include<stdio.h>
int main()
{
int a,b,c;
char ch;
printf("Enter the two integers and the operator:\n");
scanf("%d %d %c",&a,&b,&ch);
/*printf("Enter the operator:\n");
scanf("%c",&ch);
*/
switch(ch)
{
case '+' : c=a+b;
	   break;
case '-' : c=a-b;
	   break;
case '*' : c=a*b;
	   break;
case '/' : c=a/b;
	   break;
case '%' : c=a%b;
	  break;
default:printf("Invalid operator\n");
}
printf("%d %c %d=%d\n",a,ch,b,c);
return 0;
}