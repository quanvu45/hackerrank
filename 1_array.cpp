#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void read(int* a,int n);
void print(const int* a,int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int* a=new int[n];
    read(a,n);
    print(a,n);
    return 0;
}
void read(int* a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void print(const int* a,int n){
    for(int i=n-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
}
