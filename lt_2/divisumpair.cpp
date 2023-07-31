#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,t,count =0;
    vector<int> list;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>t;
        list.push_back(t);
    }
    // map<int,int> listing;
    // for(int i=0;i<n;i++){
    //     listing[list[i]]=i;
    // }
    // for(int i=0;i<n;i++){
    //     int sub=k-list[i];
    //     if(listing.count(sub) && listing[sub]!=i){
    //         count++;
    //     }
    // }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((list[i]+list[j])%k==0){
                count ++;
            }
        }
    }
    cout<<count;
}