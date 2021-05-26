#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,n=3;
    cin>>a>>b>>c;
    if(a!=1 && b!=1 && c!=1)
        cout<<a*b*c;
    else{
            if(a==1 && b!=1 && c!=1){
                cout<<(a+b)*c<<endl;
            }  
            else if (a!=1 && b==1 && c!=1)
            {
                if(a>c)
                    cout<<a*(b+c)<<endl;
                else
                    cout<<(a+b)*c<<endl;
            }
            else if (a!=1 && b!=1 && c==1)
            {
                cout<<a*(b+c)<<endl;
            }
            else{
                if(a==1 && c==1){
                    cout<< a+b+c<<endl;
                }else{
                    cout<< 2*(a*b*c)<<endl;
                }
            }
      }
}