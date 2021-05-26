#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

int main(){
    long long int n,a,b,lcm;
    cin>>n;
    while(n--){
        cin>>a>>b;
        lcm=a*b;
            while(b){
                a%=b;
                swap(a,b);
            }
        lcm/=a;
    cout<<a<<" "<<lcm<<endl;
    }

    return 0;
}