#include<iostream>

using namespace std;

int main(){
	int n,k,counter=0,a[101];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	int f=a[k];
	
	for(int i=1;i<=n;i++){
		if(a[i]>=f && a[i]!=0) counter++;
	}
	
	cout<<counter<<endl;
	
	return 0;
	
}
