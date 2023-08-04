#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,t,y;
    string a;
    cin>>n;
    map<string,int> cnt;
    for(int i=0;i<n;i++){
        cin>>t>>a;
        if(t==1){
            cin>>y;
            cnt[a]+=y;
        }
        else if(t==2){
            cnt[a] = 0;
        }
        else {
            if (cnt.find(a)!=cnt.end()) {
                cout<<cnt[a]<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
