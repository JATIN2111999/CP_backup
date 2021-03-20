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

void reverseit(struct node* p){
    if(p){
        reverseit(p->next);
        printf("%d\t",p->number);
    }
}
void inBetween(int bt,int n){
    struct node* temp =(struct node *)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->number=bt;
    

    struct node* a=current;
    struct node* b=current->next;
    if(n==0){
        temp->next=a;
        current=temp;
    }
    else{
        for(int i=0;i<n-1;i++){
            a=a->next;
            b=b->next;
        }   
    temp->next=b;
    a->next=temp;
    }
    

}



int main(){
    int a[]={10,20,30,40,50};
    int bt=15;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
        insertElement(a[i]);
    // insert in btw
    inBetween(bt,3);
    // deleteit(4)

    struct node* t=current;
    while(t!=NULL){
        printf("%d\n",t->number);
        t=t->next;
    }

    struct node* r =current;
    reverseit(r);
    return 0;
}
