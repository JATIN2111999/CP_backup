#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    vector<int> v={1,3,3,5,2,6,9,0,4};
    int X=8;

    map<int,int> m;

    for(int i=0;i<v.size();i++){
        int temp=X-v[i];
        if(temp>=0 && m[temp]==1){
            cout<<"pairs is ("<<v[i]<<','<<temp<<")"<<endl;
        }
        m[v[i]]=1;
    }

}