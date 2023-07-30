#include<bits/stdc++.h>
using namespace std;
void check(const vector<int>& a);
void read(vector<vector<int>>& a,int n);
int main(){
    int n;
    cin>>n;
    vector<vector<int>> a;
    read(a,n);
    for(int i=0;i<n;i++){
        check(a[i]);
    }
}
void check(const vector<int>& a){
    int sum=0,subsum=0,t=a.size(),cc=0;
    if(t>1){
    	for(int i=0;i<t;i++){
        sum+=a[i];
    }
    for(int i=0;i<t-1;i++){
        subsum+=a[i];
        if(sum-subsum-a[i+1]==subsum ){
            cout<<"YES"<<'\n';cc=1;break;
        }
    }
	}
    if(cc==0){
        cout<<"NO"<<'\n';
    }
}
void read(vector<vector<int>>& a,int n){
    vector<int> t;
    int sub,len;
    for(int i=0;i<n;i++){
        cin>>len;
        for(int i=0;i<len;i++){
            cin>>sub;
            t.push_back(sub);
        }
        a.push_back(t);
        t.clear();
    }
}
