#include<stdio.h>
#include<conio.h>
void main()
{
int count;
float sum=0;
float avg;
clrscr();
for(count=1;count<=10;count++)
{
sum=sum+count;
}
printf("%f\n",sum);
avg=sum/10;
printf("%f",avg);
getch();
}
