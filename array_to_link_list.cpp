#include <stdio.h>
#include<malloc.h>
struct node
{
    int number;
    struct node* next;
}*current = NULL;
void insertElement(int number)
{
    struct node* temp = (struct node *) malloc(sizeof(struct node));
    temp->number = number;
    temp->next = NULL;
    if(current == NULL)
    current = temp;
    else 
    {
        struct node* a = current;
        
    while(a->next!=NULL)
    a=a->next;
    a->next = temp;
    
}
        
    }
int main()
{
    int a[] = {1,2,3,4,5};
    for(int i =0;i<5;i++)
    insertElement(a[i]);
    while(current!=NULL)
    {
        printf("%d\n",current->number);
        current= current->next;
        
    }
    return 0;
}