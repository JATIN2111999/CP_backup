#include<iostream>
#include<map>

using namespace std;

int main(){
    map<char,int> m;
    // multimap for multiple instance of key
    string jatin="AASSDSDAASSZ";

    for(int i =0;i<jatin.size();i++){
        m[jatin[i]]++;
    }
    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }


}