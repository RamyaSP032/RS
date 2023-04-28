#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,n,m,p,s;
clrscr();
printf("enter the number of rows:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
{
printf(" ");
}
for(k=1;k<=2*i-1;k++)
{
printf("*");
}
for(l=1;l<=i;l++)
{
printf("*");
}
printf("\n");
}
for(m=1;m<=n;m++)
{
for(p=1;p<=i;p++)
{
printf(" ");
}
for(s=n;s>=i;s--)
{
printf("*");
}
for(l=n;l>=i;l--)
{
printf("*");
}
printf("\n");
}
getch();
}