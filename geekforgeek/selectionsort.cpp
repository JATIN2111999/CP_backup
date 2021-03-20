#include <stdio.h>
#include<malloc.h>


using namespace std;

int main(){
    int a[]={1,3,23,4,2,2,4,42,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
            int min=a[i];
            for(int j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
            }
        }
        int temp=a[i];
        a[i]=min;
        
    }

}

