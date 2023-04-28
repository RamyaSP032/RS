import java.lang.*;
import java.util.*;
class sentinal6
{
public static void main(String[] args)
{
int arr[]=new int[100];
Scanner rs=new Scanner(System.in);
System.out.println("No of elements:");
int a=rs.nextInt();
for (int i=1;i<=a;i++)
{
arr[i]=rs.nextInt();
}
for (int i=a;i>=1;i--)
{
System.out.println(arr[i]);
}
}
}