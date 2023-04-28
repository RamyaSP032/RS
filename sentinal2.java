import java.lang.*;
import java.util.*;
class sentinal2
{
public static void main(String[] args)
{
Scanner rs=new Scanner(System.in);
System.out.println("Enter a number:");
int a=rs.nextInt();
if(a%2==0)
{
System.out.println("Given number is even");
}
else
{
System.out.println("Given number is odd");
}
}
}