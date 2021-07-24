#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    map<string,int> m;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        m[temp]++;
    }

    int maxval=0;
    string wingroup="";  
    for(auto x:m){
        if(x.second>maxval){
            wingroup=x.first;
            maxval=x.second;
        }
    }
    cout<<wingroup<<endl;

}