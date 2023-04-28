#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,n;
clrscr();
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
for(l=1;l<=i;l++)
{
printf("*");
}
printf("\n");
}
getch();
}