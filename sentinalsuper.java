import java.lang.*;
import java.util.*;
class sentinalsuper
{
static void action()
{
int x;
Scanner rs=new Scanner(System.in);
x=nextInt();
System.out.println("number="+x);
}
}
class sentinalsup extends sentinalsuper
{
public static void main()
{
super.action();
}
}