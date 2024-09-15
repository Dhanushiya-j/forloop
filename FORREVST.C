#include<stdio.h>
#include<conio.h>
void main()
{
int row,i,j;
clrscr();
printf("enter the row:");
scanf("%d",&row);
for(i=1;i<=row;i++)
{for(j=1;j<=row-i;j++)
{printf("*\t");
}

printf("\n");
}
getch();
}