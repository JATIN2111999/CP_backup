#include<iostream>
#include<cmath>

using namespace std;
 
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int l,b;

    l=ceil((double)n/a);
    b=ceil((double)m/a);
    long long int finalhai =l*b;
    cout<<finalhai<<endl;

    return 0;
}