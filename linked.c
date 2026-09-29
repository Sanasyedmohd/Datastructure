#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node*next;
};
struct Node*top=NULL;
int isEmpty()
{
return top == NULL;
}
void push(int value)
{
struct Node*newNode = (struct Node*)
