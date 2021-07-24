#include<bits/stdc++.h>
int main() {
    std::ifstream inf("input.txt");
    std::ofstream ouf("output.txt");
    int a, b;
    inf >> a >> b;
    ouf << a + b << '\n';
    return 0;
}