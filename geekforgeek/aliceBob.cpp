#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
int main(){
    int t,i,n,j;
    cin>>t;
    while(t--){
        cin>>n;
        int n2=n;
        int nf=n;
        vector<int> a;
        vector<int> b;
        while (n--)
        {
            int t;
            cin>>t;
            a.push_back(t);

        }
        while (n2--)
        {
            int t;
            cin>>t;
            b.push_back(t);
            
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int A=0,B=0;
        for(int i=0;i<nf-1;i++){
            A+=a[i];
            B+=b[i]; 
        }
        if(A>B){
            cout<<"Bob"<<endl;
        }else if (A==B){
            cout<<"Draw"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }

    }
}
