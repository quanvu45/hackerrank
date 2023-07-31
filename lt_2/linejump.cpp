#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,a1,b,b1,t=0;
    cin>>a>>a1>>b>>b1;
	
    if(a==b && a1==b1){
        t=1;
    }else if(a1!=b1){
        if((a-b)%(b1-a1)==0 && (a-b)*(b1-a1) >=0){
        	t=1;
		}
    }
    if(t==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}