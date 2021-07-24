#include<bits/stdc++.h>

using namespace std;
int main() {
    string longstr,smallstr;
    cin>>longstr>>smallstr;
    int subsize=smallstr.size();
    int c=0;
    for(int i=0 ;i<=longstr.size();i++){
        if(longstr.substr(i,subsize)==smallstr){
            c++;
        }
        cout<<longstr.substr(i,subsize)<<endl;
    }

    cout<<c<<endl;

}