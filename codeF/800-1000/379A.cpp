#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,ans=0;
    cin>>a>>b;
    while(a>=b){
        a-=b;
        a+=1;
        ans+=b;
    }
    cout<<ans+a<<endl;
}