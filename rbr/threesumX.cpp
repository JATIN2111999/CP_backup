#include<iostream>
#include<vector>
#include<map>
#include<stdio.h>

using namespace std;

int main(){
    vector<int> v={1,3,3,5,2,6,9,0,4};
    int X=11;
    for(int i=0;i<v.size();i++){
        int l=i+1;
        int r=v.size()-1;
        while(l<r){
            int sum =v[i]+v[l]+v[r];
            if(sum==X) 
                {printf("\n(%d,%d,%d)\n",v[i],v[l],v[r]);
                break;}
            else if(sum<X) l++;
            else r--;
        }
    }

}

// o(n^2)
