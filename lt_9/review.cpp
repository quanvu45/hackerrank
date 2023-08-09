#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        string t;
        cin>>t;
        arr[i]=t;
        for(int j=0;j<(int)arr[i].length();j+=2){
            cout<<t[j];
        }cout<<" ";
        for(int j=1;j<(int)arr[i].length();j+=2){
            cout<<t[j];
        }
        cout<<'\n';
    }
    
    return 0;
}
