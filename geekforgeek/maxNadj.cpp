#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n;
        vector<int> v;
        for(i=0;i<n;i++){
            int t;
            cin>>t;
            v.push_back(t);
        }
        map<int,int> m;
        for(i=0;i<n;i++){
            m[v[i]]++;
            if(v[i]==v[i+1])
                i++;
        }
        int maxval=0;
        int maxkey=0;
        for(auto p:m ){
            if (p.second>maxval){
                maxval=p.second;
                maxkey=p.first;
            }
            
        }
        cout<<maxkey<<endl;
    }
    
}
