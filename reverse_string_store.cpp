#include<iostream>

using namespace std;
char a[10];
static int i=-1;
void rev(char *p){
	if(*p!='\0'){
		rev(++p);
		a[i++]=*p;
		cout<<*p;
	}
	
}


int main(){
	char s[]="cad script";
	char *p=s;
	rev(p);
	a[i++]=*p;
	// for(char x :a){
	// 	cout<<x<<endl;
	// }
	// cout<<a<<endl;
	cout<<*p;
}
