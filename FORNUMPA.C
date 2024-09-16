#include<stdio.h>
#include<conio.h>
void main()
{
int row,space,i,count=1,j;
clrscr();
printf("enter the row:");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
{for(space=1;space<=row-i;space++)
printf("\t");
}
{for(j=1;j<=i;j++)
printf("%d\t\t",count++);
}
printf("\n");
}
getch();
}