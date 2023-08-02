#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,sum1=0,sum2=0;cin>>a;
    int*arr1=new int[a];
    int*arr2=new int[a+1];
    for(int i=0;i<a;i++){
        cin>>arr1[i];sum1+=arr1[i];
    }
    for(int i=0;i<a+1;i++){
        cin>>arr2[i];sum2+=arr2[i];
    }
    cout<<abs(sum1-sum2);
    return 0;
}
