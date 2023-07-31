#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    string a,b;
    
    cin>>a>>b;string c=a+b;
    cout<<a.length()<<" "<<b.length()<<'\n';
    cout<<c<<'\n';
    char t=b[0];
    b[0]=a[0];a[0]=t;
    cout<<a<<" "<<b;
    return 0;
}
