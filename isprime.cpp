#include<iostream>

using namespace std;

string isprime(int n){
    if(n==0 || n==1){
        return "false";
    }
    else{
        for(int i=2;i<=(n/2);i++){
            if(n%i==0)
                return "false";
        }
        return "true";
    }
}

int main(){
    int n;
    cin>>n;
int t;
    while(t){
        cin>>t;
        cout<<isprime(t)<<endl;
    }
}