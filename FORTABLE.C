#include<stdio.h>
#include<conio.h>
void main()
{
int num,count;
clrscr();
printf("enter the number:");
scanf("%d",&num);
for(count=1;count<=10;count++)
{
printf("%d X %d=%d\n",num,count,num*count);
}
getch();
}
