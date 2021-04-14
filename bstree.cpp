#include<iostream>

using namespace std;

struct node {
	int data;
	struct node* left =NULL;
	struct node* right= NULL;
};
//
// 	        0
// 	   1		2
// 3	 4	 5    6
//


void inorder(struct node* t){
	if(t==NULL)
		return;
	inorder(t->left);
	cout<<(t->data)<<" ";
	inorder(t->right);
};


int main(){

node *t =new node();

node *t1 =new node();
node *t2 =new node();

node *t3 =new node();
node *t4 =new node();
node *t5 =new node();
node *t6 =new node();

t->data =0;
t->left=t1;
t->right=t2;

t1->data =1;
t1->left=t3;
t1->right=t4;

t2->data =2;
t2->left=t5;
t2->right=t6;

t3->data =3;
t4->data =4;
t5->data =5;
t6->data =6;

inorder(t);

}
