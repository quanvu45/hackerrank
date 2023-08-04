#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void making(int* a,int* b);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    cin>>a>>b;
    making(&a,&b);
    cout<<a<<'\n'<<b;
    return 0;
}
void making(int* a,int* b){
    int x=*a,y=*b;
    *a=x+y;*b=abs(x-y);
}
