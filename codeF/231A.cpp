#include<iostream>

using namespace std;

int main(){
    int n,a,b,c,counter=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if((a+b+c)>=2) counter++;
    }

    cout<<counter<<endl;
    return 0;

}