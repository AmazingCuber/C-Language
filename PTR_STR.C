#include<stdio.h>
struct stud
{
char name[20];
float marks;
}s[2],*ptr;
int main()
{
s[0].name="Venkat";
s[0].marks=91.2;
s[1].name="Datta";
s[1].marks=91.2;
for(ptr=s;ptr<s+2;ptr++)
{
printf("\n%s %f\n",ptr->name,ptr->marks);
}
return 0;
}
