#include<iostream>
#include<string>
using namespace std;

int check(char x){
	x=tolower(x);
	if(x=='a' || x== 'e' || x=='i' || x=='o' || x=='u' || x=='y')
		return 1;
	return 0;
};


int main(){
	char s[101];
	string new_string="";
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
	if(check(s[i])) continue;
	else {
		new_string.push_back('.');
		new_string.push_back(tolower(s[i]));
	}
}

cout<<new_string<<endl;

}
