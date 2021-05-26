#include<iostream>
#include<string>
using namespace std;
 
int main(){
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            char f=s[0];
            char l =s[s.size()-1];
            string final=f+to_string(s.size()-2)+l;
            cout<<final<<endl;
        }
    }
    return 0;
}