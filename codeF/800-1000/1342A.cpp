#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll a,b,t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;
        if(x<y){
            swap(x,y);
        }

        if((a+a)<=b)
            cout<<(x+y)*a<<endl;
        else
            cout<< ((y*b) + ((x-y)*a))<<endl;
    }
}