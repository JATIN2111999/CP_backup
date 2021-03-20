#include <stdio.h>
#include<malloc.h>


using namespace std;

struct node{
    int number;
    struct node* next;
}*current = NULL;

void nodeentry(int number){
    struct node* temp =(struct node*) malloc(sizeof(struct node));
    temp->number=number;
    temp->next=NULL;
    if(current==NULL){
        current=temp;
    }else{
        struct node* a =current;

        while (a->next)
        {
            a=a->next;
        }
        a->next=temp;
        
    }
}


void printNthFromLast(struct node * p,int n){
    struct node* temp=p;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    if(len<n)
        return;
    
    temp=p;

    for(int i=0;i<len-n;i++){
        temp=temp->next;
    }
    printf("%d\n",temp->number);

}


int main(){
    int a[]={1,2,3,5,6,7};
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++){
        nodeentry(a[i]);
    }

    struct node* t=current;

    while(t){
        printf("%d\n",t->number);
        t=t->next;
    }

    printNthFromLast(current,6);


    return 0;
}