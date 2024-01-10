#include<stdio.h>
int main()
{
int age;
char ms,sex;
printf("Enter the age,martial status and sex of the applicant:");
scanf("%d %c %c",&age,&ms,&sex);
if((ms='M')||(ms=='U'&&sex=='M'&&age>30)||(ms=='U'&&sex=='F'&&age>25))
printf("The driver can be insured\n");
else
printf("The driver cannot be insured\n");
return 0;
}