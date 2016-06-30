#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j=0;
clrscr();
printf("Enter the word\n");
scanf("%s",a);
strrev(a);
printf("Reverse word is :%s \n",a);
for(i=0;i<=strlen(a);i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
a[i]=' ';
else
b[j++]=a[i];
}
b[i]='/0';
printf("The word removed vowles is :%s \n",b);
getch();
}
