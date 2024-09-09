#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,d,cube,i;
clrscr();
printf("starting number:");
scanf("%d",&i);
printf("ending number:");
scanf("%d",&n);
printf("number:\t");
printf("cube \n");
for(d=i;d<=n;d++)
{
printf("%d\t",d);
cube=pow(d,3);
printf("%d\n",cube);
}
getch();
}
