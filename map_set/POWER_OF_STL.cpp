#include<iostream>
#include<map>
#include<utility>
#include<set>


using namespace std;
int main(){

   map<int,int> m;
    for(int x :l){
        m[x]++;
    }
    int max=0;
    for(int y:l){
        int c=m[y];
        int d=m[y-1];
        c=c+d;
        if(c>max)
            max=c;
        
    }
    
    return max;

    return 0;

}



  map<int,int> m;
    for(int x :l){
        m[x]++;
    }
    int max=0;
    for(int y:l){
        int c=m[y];
        int d=m[y-1];
        c=c+d;
        if(c>max)
            max=c;
        
    }
