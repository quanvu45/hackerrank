#include<bits/stdc++.h>
using namespace std;
int binarysearch(const vector<int>& a,int l,int r,int x);
int main(){
    vector<int> arr;
    int n,t,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>t;
        arr.push_back(t);
    }
    cout<<binarysearch(arr,0,n-1,x);
}
int binarysearch(const vector<int>& a,int l,int r,int x){
    if(l>r){
        return -1;
    }
    int mid=(r+l)/2;
    if(a[mid]==x){
        return mid;
    }else if(a[mid]>x){
        binarysearch(a,0,mid-1,x);
    }else{
        binarysearch(a,mid+1,(int)a.size()-1,x);
    }
}