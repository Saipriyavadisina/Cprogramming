#include <stdio.h>
void main()
{
   int i,n,sum=0;
   printf("n value is : ");
   scanf("%d",&n);
   printf("The first %d natural numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum += i;
   }
   printf("\nThe Sum of natural numbers upto %d terms : %d \n",n,sum);
}
