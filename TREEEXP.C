#include<stdio.h>
#include<conio.h>
void insertnode(int);
void display();
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node root=NULL;
main()
{
int cho,item;
clrscr();
printf("enter ur choice");
scanf("%d",&cho);
while(1)
{
switch(cho)
{
case 1:printf("enter a value");
       scanf("%d",&item);
       insertnode(item);
break;
default:printf("invalid input");
}
}
getch ();
return 0;
}
void insertnode(int item)
{
struct node *newnode,*temp,*parent;
newnode=(*struct node)malloc(sizeof(struct node));
newnode->left=NULL;
newnode->right=NULL;
newnode->data=item;
temp=root;
parent=root;
if(root==NULL)
root=newnode;
else
{
while(parent)
{
if(newnode->data>temp->data)
temp=temp->right;
else
temp=temp->left;
}
if(parent->data>newnode->data)
parent->right=newnode;
else
parent->left=newnode;
}
}