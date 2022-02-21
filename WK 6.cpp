#include <stdio.h>
int main()
{
   int j,i,n;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   printf("Multiplication table from 1 to %d \n",n);
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
       if (j<=n-1)
           printf("%d, ",i*j);
          else
	    printf("%d",i*j);

      }
     printf("\n");
    }
} 