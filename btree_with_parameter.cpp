#include<iostream>

using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
    node(struct node* l ,int d,struct node* r){
        data=d;
        left=l;
        right=r;
    }
};
//      1
// 2        3

void inorder(struct node* t){
    if(t==NULL)
        return ;
    inorder(t->left);
    inorder(t->right);
    cout<<(t->data)<<" ";
    
};

int main(){
    node *t2 = new node(NULL,2,NULL);
    node *t3 = new node(NULL,3,NULL);
    node *t = new node(t2,1,t3);
    inorder(t);
}
