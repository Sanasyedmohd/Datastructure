#include <stdio.h>
int linearSearch(int arr[],int size,int target)
{
  for(int i=0;i<size;i++)
  {
   if(arr[i]==target)
    {
     return i;
    }
  }
  return -1;
}
int main()
 {
  int arr[100],size,target,result;
  printf("Enter the number of elements in the array:");
  scanf("%d",&size);
  printf("Enter %d integers",size);
  for(int i=0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
 printf("Enter the element to search for:");
 scanf("%d",&target);
 result = linearSearch(arr,size,target);
 if(result!=-1)
  {
   printf("Element %d found at index %d (position %d).\n",target,result,result+1);
  }
 else
  {
   printf("Element %d not found in the array.\n",target);
  }
 return 0;
 }

