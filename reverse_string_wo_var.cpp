#include<iostream>

using namespace std;

int main(){
    char a[]="jatin";
    char *p1=a;
    char *p2=a+sizeof(a)-2;
    while (p1<p2)
    {   
        char temp = *p1;
        *p1++=*p2;
        *p2--=temp;
        
    }
    
    cout<<a<<" "<<sizeof(a)<<endl;

}