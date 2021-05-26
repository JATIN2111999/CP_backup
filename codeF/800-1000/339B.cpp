#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,m,c;
    cin>>n>>m;
    vector<ll> v;
    ll t=m;
    while(t--){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    ll sumall=v[0]-1;
    for(ll i=1;i<m;i++){
        if(v[i-1]==v[i])
            continue;
        if(v[i-1]<v[i])
            sumall+=(v[i]-v[i-1]);
        else
            sumall+=(n-v[i-1]+v[i]);
    }
    cout<<sumall<<endl;
}