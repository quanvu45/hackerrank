#include<bits/stdc++.h>
using namespace std;
int backtrack(int x,int n,vector<int> &arr);
int main(){
    int n,x;
    vector<int> arr;
    cin>>x>>n;
    cout<<backtrack(x,n,arr);
}
int backtrack(int x,int n,vector<int> &arr){
    int s=0,len=arr.size();
    for(int i=0;i<len;i++){
        s+=pow(arr[i],n);
    }
    if(s==x){
        return 1;
    }else{
        int answer=0;
        int t=arr.empty() ? 1:arr.back()+1;
        while(s+pow(t,n)<=x){
            arr.push_back(t);
            answer+=backtrack(x,n,arr);
            arr.pop_back();
            t++;
        }
        return answer;
    }
}