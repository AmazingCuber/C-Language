#include<stdio.h>
struct student
{
int age;
float marks;
}s;
void fun1(struct student s)
{
printf("%d %f",s.age,s.marks);
}
int main()
{
scanf("%d %f",&s.age,&s.marks);
fun1(s);
return 0;
}
/*void fun1(struct s)
{
 printf("%d %f",s[1].age,s[1].marks);
}*/