#include<stdio.h>
#include<iostream>

using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  

int main(){
    int a[]={64 ,25 ,12 ,22, 11};
    int i,j;
    int n=sizeof(a)/sizeof(a[0]);
    int min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(&a[min], &a[i]);
    }

    for(int x: a)
        cout<<x<<" ";
}