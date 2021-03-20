#include <iostream>
#include <unordered_map>
#include <map>


using namespace std;

int main(){
    string s="ahahahaa";
    int l=0;
    int h=s.size()-1;
    int yo=1;
    while(l<h){
        if(s[l++]!=s[h--]){
            cout<<"not p";
            yo=0;break;
        }
    }
    if(yo)
        cout<<"P ";
    return 0;        

}