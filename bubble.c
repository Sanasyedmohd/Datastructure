#include <stdio.h>
int main()
{
  int arr[100],n,i,j,temp;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers:\n",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-1-i;j++)
    {
     if(arr[j]>arr[j+1])//change > to < for descending order
      {
       temp= arr[j];
       arr[j]=arr[j+1];
       arr[j+1]= temp;
      }
    }
  }
 printf("sorted array in ascending order:\n");
 for(i=0;i<n;i++)
  {
   printf("%d",arr[i]);
  }
 printf("\n");
 return 0;
}
