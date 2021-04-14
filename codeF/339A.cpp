#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	string a;
	string ans="";
	map<char,int> m;
	cin>>a;
	for(auto x:a){
		if(x=='+')
			continue;
		m[x]++;
	}
	for(auto x :m){
		if(x.first=='+')
			continue;
		while(x.second--){
			ans.push_back(x.first);
			ans.push_back('+');
		}
	}
	ans.pop_back();
	cout<<ans<<endl;
}
