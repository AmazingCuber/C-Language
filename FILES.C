#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
//clrscr();
FILE* fptr;
clrscr();
fptr=fopen("SIN.C","r");
if(fptr==NULL)
{
printf("The file is not opened.The program wil now exit.");
exit(0);
}
while(1)
{
ch=fgetc(fptr);
if(ch==EOF)
break;
printf("%c",ch);
}
//printf("%d\n",ftell(fptr));
//fseek(fptr,10,1);
//printf("%d\n",ftell(fptr));
//rewind(fptr);
//printf("%d",ftell(fptr));
return 0;
}
