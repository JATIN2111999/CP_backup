#include<iostream>

using namespace std;


struct node{
    int data;
    struct node* prev;
    struct node* next;
};

int main(){

    node* f1 =new node();        
    node* f2 =new node();
    node* f3 =new node();

    f1->data=1;
    f1->next=f2;
    f1->prev=NULL;

    f2->data=2;
    f2->next=f3;
    f2->prev=f1;


    f3->data=3;
    f3->next=NULL;
    f3->prev=f2;

    struct node *t=f1;

    struct node *l=f3;

    while (t)
    {
        cout<<t->data<<"\t";
        t = t->next;
    }
    cout<<"\n";
    while(l){
        cout<<l->data<<"\t";
        l=l->prev;
    }
    return 0;
    
}