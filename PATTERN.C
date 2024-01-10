#include<stdio.h>
#include<string.h>
int match(char *x, char *y);
int main()
{
char a[10],b[10];
int position;
printf("Enter some text: ");
gets(a);
printf("Enter the verification string: ");
gets(b);
position = match(a,b);
printf("position: %d",position);
return 0;
}
int match(char *a,char *b)
{
int c,position=0;
char *x,*y;
x=a;
y=b;
while(*a)
{
while(*x == *y)
{
x++;
y++;
if(*x=='\0'|| *y=='\0')
{
break;
}
if(*y == '\0')
{
break;
}
a++;
position++;
x=a;
y=b;
}
if(*a)
{
return position;
}
else{
return -1;
}
}
return -1;
}