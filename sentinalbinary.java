import java.lang.*;
import java.util.*;
class sentinalbinary
{
public static void main(String[] args)
{
int list[]=new int[20];
Scanner rs=new Scanner(System.in);
System.out.println("Enter the number of numbers you want to enter:");
int n=rs.nextInt();
System.out.println("Enter the elements:");
for(int i=1;i<=n;i++)
{
list[i]=rs.nextInt();
}
System.out.println("Enter the element tobe searched:");
int key=rs.nextInt();
int high=n;
int low=1;
int mid=(high+low)/2;
while(mid<=high)
{
if(list[mid]==key)
{
System.out.println("key found at index:"+mid);
break;
}
else if(list[mid]<key)
{
mid=mid++;
}
else if(list[mid]>key)
{
mid=mid--;
}
else
{
System.out.println("Invalid");
}
}
}
}

