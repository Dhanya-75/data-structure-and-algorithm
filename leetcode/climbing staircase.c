#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n<=2)
   {
       printf("%d",n);
       return 0;
   }
   int first =1,second=2,total=0;
   for(int i=3;i<=n;i++)
   {
       total=first+second;
       first = second;
       second=total;
   }
   printf("%d",total);
   return 0;
}
