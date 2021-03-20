#include <stdio.h>
#include<malloc.h>
struct node{
    int number;
    struct node* next;
}*current=NULL;
void insertElement(int number){
    struct node* temp= (struct node *) malloc(sizeof(struct node));
    temp->number=number;
    temp->next=NULL;
    if(current==NULL)
        current=temp;   
    else{
        struct node* a=current;
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=temp;
    }
}

// last kth element with twopointer

int kthelement(struct node *H,int k){
    struct node *p1=H;
    struct node *p2=H;
    while(k--){
        p2=p2->next;
    }
    while(p2){
        p1=p1->next;
        p2=p2->next;
    }
    return p1->number;
}

int main(){
    int a[]={10,15,20,30,40,50};
    int bt=15;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
        insertElement(a[i]);
       
    struct node* t=current;
    while(t!=NULL){
        printf("%d\n",t->number);
        t=t->next;
    }

    int element;
    struct node* k =current;
    element =kthelement(k,6);
    printf("\nthe kth last element is %d\n",element);

    return 0;
}