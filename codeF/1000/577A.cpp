#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll c=0;
    ll n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if((k/i)<=n && k%i==0)
            c++;
    }
    cout<<c<<endl;
}