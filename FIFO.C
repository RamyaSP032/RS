#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],frame[5],no,j,i,n,k,count=0;
clrscr();
printf("enter the no of frame:");
scanf("%d",&no);
printf("enter the no of pages:");
scanf("%d",&n);
printf("enter the pages:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=no;i++)
{
frame[i]=-1;
}
for(i=1;i<=n;i++);
{
printf("page no:%d\t\t",a[i]);
for(k=1;k<=no;k++)
{
if(frame[k]==a[i])
{
break;
}
if(frame[k]!=a[i])
{
frame[k]=a[i];
count++;
for(j=1;j<=no;j++)
printf("%d\t\t",frame[j]);
break;
}
}
printf("\n");
}
printf("page faults:%d",count);
getch();
}