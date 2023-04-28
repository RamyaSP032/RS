#include<stdio.h>
#include<conio.h>
# define size 100
void push();
void pop();
void show();
int data;
int top=-1;
int stack[size];
int main()
{
int n,i,ch;
clrscr();
printf("enter no.of elements in the stack");
scanf("%d",&n);
printf("1.push 2.pop 3.show 4.exit");
for(i=0;i<10;i++)
{
printf("enter your choice");
scanf("%d",&ch);
if(ch==4)
break;
switch(ch)
{
case 1:push();break;
case 2:pop();break;
case 3:show();break;
case 4:printf("exitimg");
break;
}
}
return 0;
}
void push()
{
if(top>=size)
printf("stack is overflow");
else
{
printf("enter the data to push");
scanf("%d",&data);
top++;
stack[top]=data;
}
}
void pop()
{
int i;
if(top==-1)
printf("underflow");
else
{
i=stack[top];
top=top-1;
printf("value deleted is %d",i);
}
}
void show()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d\t",stack[i]);
}
if(top==-1)
printf("stack is empty");
}






