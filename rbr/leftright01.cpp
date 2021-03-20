#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v={0,0,1,0,1,0,1,0,0,0,1,0,1,0};
    int p1=0;
    int p2=v.size()-1;
    while(p1<p2){
        if(v[p1]==1 && v[p2]==0){
            int temp =  v[p1];
            v[p1]=v[p2];
            v[p2]=temp;
        }
        while(v[p1]!=1 && p1<p2) p1++;
        while(v[p2]!=0 && p1<p2) p2--;
    }

    for(int x:v){
        cout<<x<<" ";
    }

}