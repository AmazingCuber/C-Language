#include<stdio.h>
int top = -1;
char push(char x)
{
stack[++top]=x;
}
char pop()
{
if(top == -1)
{
return -1;
}
else
{
return stack[top--];
}
int priority(char x)
{
if(x == '(')
return 0;
else if(x == '+'||x == '-')
return 1;
else if(x=='*' || x=='/')
return2;
}
int main()
{
char exp[20]="(a+b-f*g)+c/d-e", *e,x;
e=exp;
while(*e !='\0')
{
if(isalnum(*e))
print("%c",e*);
else if(*e == "(")
push(*e);
//else if(*e == ")")
while((x=pop()) != '(')
{
printf("%c",x);
}
else
{
while(priority(stack[top])>=priority(*e))
{
printf("%c",pop());
push(*e);
}
e++;
}
}
while(top!=-1)
{
printf("%c",pop());
}
}