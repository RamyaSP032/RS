import java.lang.*;
import java.util.*;
import java.io.*;
class threader implements Runnable
{
Thread t1=new Thread();
Thread t2=new Thread();
}
class usethreader extends Exception
{
public static void main(String args[])
{
int i=1;
static void action();
{
System.out.println("Thread "+i);
i++;
}
threader ut=new threader();
public void run()
{
action();
}
try
{
ut.t1.start();
ut.t2.start();
}
catch(Exception e)
{
System.out.println("hahaha");
}
}
}