#include<iostream>

using namespace std;

int main(){
	int X=0;
	int n;	
	cin>>n;
	while(n--){
		char a[10];
		cin>>a;
		
		if(a[0] == '+' || a[2]=='+') X++;
	
		else X--;
}

cout<<X<<endl;

return 0;
}
