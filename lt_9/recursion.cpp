#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int i){
    if(i==1 || i==0){
        return 1;
    }else{
        return i*factorial(i-1);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    cout<<factorial(n);
    return 0;
}
