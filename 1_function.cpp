#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void read(int a[]);
int max(const int a[]);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[4];
     read(a);
     cout<<max(a);
    return 0;
}
void read(int a[]){
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
}
int max(const int a[]){
    int max=a[0];
    for(int i=1;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

