#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;
int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(-1);
    s.insert(-10);
    //internal sort asc and logn time to insert
    for(int x:s){
        cout<<x<<" ";
    }

    auto it=s.find(-1);
    if (it==s.end())
        cout<<"not present\n";
    else    
        cout<<"present\n";

    return 0;

}