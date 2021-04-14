#include<bits/stdc++.h>

using namespace std;
stack<int> s;

void  rev(){
    if(!s.empty()){
        int x=s.top();
        s.pop();
        rev();
        s.push(x);
    }
};

int main(){
 
    int a[]={1,2,3,4,5,6};
    for(int x:a){
        s.push(x);
    }

    rev();

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}