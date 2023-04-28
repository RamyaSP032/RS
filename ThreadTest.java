import java.lang.*;
class ThreadTest extends Thread
{
static
{
Thread t=Thread.currentThread();
System.out.println("thread test is loaded by"+t.getName()+"thread");
t.setName("sesh");
System.out.println("changed the name");
System.out.println("suspending thread for 5 sec");
try
{
Thread.sleep(5000);
}
catch(Exception ex){}
}
public static void main(String args[])
{
Thread t=Thread.currentThread();
System.out.println("main() is invoked by "+t.getName()+"thread");
}
}