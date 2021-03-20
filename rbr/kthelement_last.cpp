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




void deleteit(int n){
    struct node* temp = (struct node *) malloc(sizeof(struct node));
    struct node* a =current;
    struct node* b =current->next;
    for(int i=0;i<n-1;i++){
        a=a->next;
        b=b->next;

    }
    
}

int main(){
    int a[]={10,20,30,40,50};
    int bt=15;
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
        insertElement(a[i]);

    struct node* t=current;
    while(t!=NULL){
        printf("%d\n",t->number);
        t=t->next;
    }

    struct node* r =current;
    return 0;
}