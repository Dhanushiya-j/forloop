
#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=num/2;i++)
{
if(num%i==0)
printf("%d\n",i);
}
getch();
}


