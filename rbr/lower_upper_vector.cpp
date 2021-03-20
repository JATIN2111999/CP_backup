#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v={12,22,4,5,67,3,2};
    sort(v.begin(),v.end());
    bool present=binary_search(v.begin(),v.end(),22);

    cout<<present<<endl;

    auto it=lower_bound(v.begin(),v.end(),67);
    auto it2=upper_bound(v.begin(),v.end(),67);

    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl;

    for(int &x:v){
        //this will update the vector noice
        x++; 
        cout<<x <<" ";
    }

    cout<<endl;

    
}