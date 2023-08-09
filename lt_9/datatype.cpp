#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    float b;
    string sa,sb,c;
    // getline(cin,sa);
    // a=sa[0]-'0';
    // getline(cin,sb);
    // b=(float)(sb[0]-'0');
    cin>>a>>b;
    getline(cin,c);getline(cin,c);
    cout<<a+4<<'\n';
    cout<<setprecision(1)<<fixed<<(float)b+4<<'\n';
    cout<<"Hackerrank "+c;
    return 0;
}
