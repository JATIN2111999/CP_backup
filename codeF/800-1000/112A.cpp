#include<iostream>
using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int n=s1.size(),c=0;
	int ss1=0,ss2=0;
	while(n--){
		if(tolower(s1[c]) == tolower(s2[c])){
			c++;
			continue;}
		ss1+=int(tolower(s1[c]));
		ss2+=int(tolower(s2[c]));
		
	}
	if(ss1==ss2) cout<<0<<endl;
	if(ss1<ss2) cout<<-1<<endl;
	if(ss1>ss2) cout<<1<<endl;
	
}
