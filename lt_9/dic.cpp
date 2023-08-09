#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,string> arr;
    vector<string> words;
    int n;cin>>n;string x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arr[x]=y;
    }
    for(int i=0;i<n;i++){
        cin>>x;words.push_back(x);
        if(arr.find(x)!=arr.end()){
            cout<<x<<"="<<arr[x]<<'\n';
        }else{
            cout<<"Not found"<<'\n';
        }
    }
    return 0;
}
