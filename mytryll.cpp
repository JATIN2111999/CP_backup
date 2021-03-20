#include<iostream>
#include<malloc.h>

using namespace std;

struct node{
	int number;
	struct node* next;
}*current =NULL;



void insertinll(int number){
	struct node* temp =(struct node*)malloc(sizeof(struct node));
	temp->number=number;
	temp->next=NULL;
	if(current==NULL){
		current=temp;
	}
	else{
		struct node* t =current;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=temp;
	}
}



int main(){


	int a[]={1,2,3,4,5};
	for(int x:a){
		insertinll(x);
	}
	
	struct node* b =current;
	while(b->next!=NULL){
		cout<<(b->number)<<" ";
		b=b->next;
	}
}
