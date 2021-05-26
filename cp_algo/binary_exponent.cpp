#include<bits/stdc++.h>
#define ll long long
using namespace std;



ll binpow(ll a, ll b){
    ll res =1;

    while (b>0)
    {   
        // calculate odd number of and store it in result
        if(b & 1) // if odd
            res = res *a;
        
        // continuously multiply  
        a = a*a;
        

        b >>=1; // b=b/2
    }

    return res;
    
}


int main(){
    // calculate 3^120
    ll a = 3;
    ll b=5;

    cout<<binpow(a,b);

}