#include<bits/stdc++.h>
using namespace std;
void showstack(stack<int> s){
    while (!s.empty())
    {
        cout<<'\t'<<s.top();
        s.pop();
    }
    cout<<'\n';
}
 
int main(){
    stack<int> s;
    int a[]={1,2,3,423,23,1};
    for(int x:a){
        s.push(x);
    }

    cout << "The stack is : ";
    showstack(s);
 
    cout << "\ns.size() : " << s.size();
    cout << "\ns.top() : " << s.top();
 
 
    cout << "\ns.pop() : ";
    s.pop();
    showstack(s);
}