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


int isIdentical(struct node *p,struct node *q){
    if(p==NULL && q==NULL)
        return 1;
    if(p!=NULL && q!=NULL && p->data==q->data)
    {
        int l_tree =isIdentical(p->left,q->left);
        if(!l_tree)
            return 0;
        int r_tree =isIdentical(p->right,q->right);
        if(!r_tree)
            return 0;
        return 1;
    }else{
        return 0;
    }
}

int isIdentical_compact(struct node *p,struct node *q){
    if(p==NULL && q==NULL)
        return 1;
    if(p!=NULL && q!=NULL && p->data==q->data && isIdentical_compact(p->left,q->left) && isIdentical_compact(p->right,q->right))
        return 1;
    return 0;
}

int main(){
    // tree1

    node *t2 = new node(NULL,2,NULL);
    node *t3 = new node(NULL,3,NULL);
    node *t = new node(t2,1,t3);

    // tree2
    // node *ntl = new node(NULL,4,NULL);
    node *nt2 = new node(NULL,2,NULL);
    node *nt3 = new node(NULL,3,NULL);
    node *nt = new node(nt2,1,nt3);

    
    int result = isIdentical_compact(t,nt);
    // int result = isIdentical(t,nt);
    if(result)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;

}