#include<stdio.h>
#include<conio.h>
void main()
{
int row, space,i,j;
clrscr();
printf("enter the row:");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
{for(space=1;space<=row-i;space++)
printf("\t");
{for(j=1;j<=i;j++)
printf("*\t\t");
}
}
printf("\n");
}
getch();
}
