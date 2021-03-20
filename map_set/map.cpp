#include<iostream>
#include<map>

using namespace std;
int main(){
    map<char,int> m;

    string jatin="AASSDSDAASSZ";

    for(int i=0;i<jatin.size();i++){
        char temp;
        int count=0;
        temp=jatin[i];
        for(int j=0;j<jatin.size();j++){
            if(temp==jatin[j]){
                count++;
            }

        }
        m.insert({temp,count});
    }

    for(auto &x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;

}

