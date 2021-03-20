#include<iostream>

using namespace std;

int main(){
    int a[]={1, 5, 3, 2};
    int t,i;
    int swap=1;
    while(swap){
        swap=0;
        for(int i=0;i<(sizeof(a)/sizeof(a[0]))-1;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                swap=1;
            }

        }
    }
    for(int x:a){
        cout<<x<<" ";
    }
}
