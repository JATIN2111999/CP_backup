#include<iostream>
#include<map>

using namespace std;

map<char,int> m;

int main(){
    // first char to get count ==1 in this f is the ans if we remove f then o is the ans 
    char str[] = "geeksforgeeks"; 
    
    for(char x:str){
        m[x]++;
    }

    int gotit=0;
    for(char a:str){
        if(m[a]==1){
            cout<<a;
            gotit=1;
            break;

        }
    }
    if(!gotit)
        cout<<"no  char with 1 unique count";
}