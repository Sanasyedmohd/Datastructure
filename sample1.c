#include<stdio.h>
int main()
{
int SIZE,element;
printf("enter the size of array:\n");
scanf("%d",&SIZE);
int numbers[SIZE];
for(int i=0;i<SIZE;i++)
{
 printf("enter the elements:");
 scanf("%d",&element);
 numbers[i]=element;
}
printf("initialized array elements:\n");
for(int i=0;i<SIZE;i++)
printf("numbers[%d]=%d\n",i,numbers[i]);
return 0;
}





