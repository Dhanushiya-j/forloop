#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("enter the num:");
scanf("%d",&num);
for(i=num;i!=0;i=i/10)
printf("%d",i%10);
getch();
}
