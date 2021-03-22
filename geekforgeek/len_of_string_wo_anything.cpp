#include<iostream>

using namespace std;


int sizeofjatin(char *c){
    if (*c =='\0'){
        return 0;
    }
    else
        return 1 + sizeofjatin(++c);

}


int main(){

    char jatin[]="jatin";

    cout<<sizeofjatin(jatin)<<endl;


}