#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={-5,-7,1,2,6,9};

    int *p1 =&v[0];
    int *p2 =&v[0] +v.size()-1;
    int minl;
    int minr;
    int closest_sum=9999;
    while(p1<p2){
        int cs= *p1 +*p2;
        if(abs(cs)<abs(closest_sum)){
            closest_sum=cs;
            minl=*p1;
            minr=*p2;
        }
        
        if(cs<0) p1++;
        else p2--;
    }
    cout<<"("<<minl<<","<<minr<<")"<<endl;
}
