#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,a=0;
clrscr();
printf("enter the number:");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{if(num%i==0)
{a=1;
break;
}
}
if(a==1)
printf("%d is a composite number",num);
else
printf("%d is a prime number",num);
getch();
}