#include<bits/stdc++.h>

using namespace std;

template <typename T>
inline T const& MAX(T const&a, T const& b){
    return a<b ? b:a;
}

int main(){
    int i =39;  
    int j =20;
    cout << "MAX(i, j): " << MAX(i, j) << endl; 

    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "MAX(f1, f2): " << MAX(f1, f2) << endl; 

    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "MAX(s1, s2): " << MAX(s1, s2) << endl; 
}