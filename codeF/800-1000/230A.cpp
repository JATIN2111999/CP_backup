#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,n,a,b,flag=0;
    cin>>s>>n;
    vector<vector<int>> v;
    while(n--){
        cin>>a>>b;
        vector<int> vt = {a,b};
        v.push_back(vt);
    }
    sort(v.begin(),v.end());

    for(auto x : v){
        if(x[0]<s){
            s+=x[1];
        }else{
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}