#include<bits/stdc++.h>
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

//          1
//      2        3
//  4     5   6      7

void inorder(struct node* t){
    if(t==NULL)
        return ;
    inorder(t->left);
    cout<<(t->data)<<" ";
    inorder(t->right);

};

int sizeofTree(struct node* root){
    return root ? (1+sizeofTree(root->left)+sizeofTree(root->right)):0;
};

int main(){

    node *t4 = new node(NULL,4,NULL);
    node *t5 = new node(NULL,5,NULL);
    node *t6 = new node(NULL,6,NULL);
    node *t7 = new node(NULL,7,NULL);
    node *t2 = new node(t4,2,t5);
    node *t3 = new node(t6,3,t7);
    node *t = new node(t2,1,t3);
    // traversal
    inorder(t);
    cout<<"\n";

    // nodes in tree
    int sizeT=sizeofTree(t);
    cout<<"size of tree is "<<sizeT<<endl;

}