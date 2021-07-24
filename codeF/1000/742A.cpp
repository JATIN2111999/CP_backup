#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number = (int) n%4;
    map<int,int> m={{0,6},{1,8},{2,4},{3,2}};
    if(n==0){
        cout<<1<<endl;
    }else{
    cout<<m[number]<<endl;
    }
}