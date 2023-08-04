#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t,len,a,b;cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    cin>>len>>a>>b;
    arr.erase(arr.begin()+len-1);
    // for(auto it:arr){
    //     cout<<it<<" ";
    // }
    arr.erase(arr.begin()+a-1,arr.begin()+b-1);
    cout<<arr.size()<<'\n';
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}
