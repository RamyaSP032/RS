#include<stdio.h>
#include<conio.h>
int main()
{
	int target,i,l,j,k=0,b[10];
   int a[5]={1,4,6,3,5};
   int n=5;
   clrscr();
   for(i=0;i<n;i++)
   {
   target=6;
   j=i;
       while(j<n)
       {
	   target-=a[j];
	   if(target<0)
	   {
	       continue;
	       if(j==4)
	       {
	       if(k>1)
	       {
	       k=1;
	       }
	       }
	   }
	   else if(target>0)
	   {
	       b[k]=a[j];
	       k++;
	   }
	   else
	   {
	       b[k]=a[j];
	       for(l=0;l<=k;l++)
	       {
		   printf("%d \t",b[l]);
	       }
	       k=0;
	   }
       }printf("\n");
       j++;
   }
   getch();
   return 0;
}