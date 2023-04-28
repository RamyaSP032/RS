import java.lang.*;
import java.util.*;
class cube3d
{
public static void main(String args[])
{
int i,j,k,n;
int arr3d[][][]=new int[20][20][20];
System.out.println("for X*X cube X=");
Scanner rs=new Scanner(System.in);
n=rs.nextInt();
System.out.println("enter the elements:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
for(k=1;k<=n;k++)
{
arr3d[i][j][k]=rs.nextInt();
}
}
}
System.out.println("The cube elements:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
for(k=1;k<=n;k++)
{
System.out.print(arr3d[i][j][k]+"\t");
}
}
System.out.println();
}
System.out.println("\tMENU\n1.Front face\n2.Top face\n3.Bottom face\n4.Back face");
int x=1;
while(x!=5)
{
System.out.println("enter your choice:");
int choice=rs.nextInt();
switch(choice)
{
case 1:
System.out.println("Front face:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
System.out.print(arr3d[i][j][1]+"\t");
}
System.out.println();
}
break;
case 2:
System.out.println("Top face:");
for(i=n;i>=1;i--)
{
for(j=1;j<=n;j++)
{
System.out.print(arr3d[1][j][i]+"\t");
}
System.out.println();
}
break;
case 3:
System.out.println("Bottom face:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
System.out.print(arr3d[n][j][i]+"\t");
}
System.out.println();
}
break;
case 4:
System.out.println("Back face:");
for(i=1;i<=n;i++)
{
for(j=n;j>=1;j--)
{
System.out.print(arr3d[i][j][n]+"\t");
}
System.out.println();
}
break;
default:
x=5;
System.out.println("invalid choice");
}
}
}
}