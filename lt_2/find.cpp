#include <bits/stdc++.h>

using namespace std;
int check(int a);
int main(){
    int n,iter;
    cin>>n;
    vector<int> list;
    for(int i=0;i<n;i++){
        cin>>iter;
        list.push_back(iter);
    }
    for(int i=0;i<n;i++){
        cout<<check(list[i])<<'\n';
    }
}
int check(int a){
    int t=a,num=0,count=0;
    while(t>0){
      num=t%10;
      if(num!=0){
          if(a%num==0){
              count++;
          }
      }  
      t=t/10;
    }
    return count;
}
