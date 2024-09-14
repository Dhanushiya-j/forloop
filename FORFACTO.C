#include<stdio.h>
#include<conio.h>
void main()
{
float count,fac=1,num,sum=0,n;
clrscr();
printf("enter the number");
scanf("%f",&n);
for(count=1;count<=n;count++)
{
fac=fac*count;
num=count/fac;
sum=sum+num;
}
printf("%f",sum);
getch();
}
