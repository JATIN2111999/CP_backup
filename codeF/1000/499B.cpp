#include<bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    string l1,l2,temp,finalstring;
    map<string,string> dict;
    cin>>n>>m;
    while(m--){
        cin>>l1>>l2;
        dict[l1]=l2;
        dict[l2]=l1;
    }
    while(n--){
        cin>>temp;
        if(temp.size()<=dict[temp].size())
            finalstring+=temp+" ";
        else
            finalstring+=dict[temp]+" ";

    }
        cout<<finalstring<<endl;

}