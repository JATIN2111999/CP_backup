#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    vector<int> v={3,2,4,5,6,2,5,4,3};
    map<int,int> m;

    for(int x:v) m[x]++;

    for(int x:v){
        if(m[x]>0){
            while(m[x]--){
                cout<<x<<" ";
            }
        }
    }


}