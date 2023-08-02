#include <bits/stdc++.h>

using namespace std;
int min(int a,int b){
    if(a>=b){return a;}
    else{return b;}
}
int main(){
    string c,d;
    map<char,int> cnt1,cnt2;
    cin>>c;
    cin>>d;
    int count;
    int t1=c.length(),t2=d.length();
    for(int i=0;i<t1;i++){
    	cnt1[c[i]]++;
	}
	for(int i=0;i<t1;i++){
		cnt1[d[i]]++;
	}
	for(int i=0;i<t1;i++){
		if(cnt1[c[i]]!=cnt2[c[i]]){
			int tong=(cnt1[c[i]]+cnt2[c[i]])/2;
			count+=min(abs(cnt1[c[i]]-tong),abs(cnt2[c[i]]-tong));
		}
	}
	for(int i=0;i<t2;i++){
		if(cnt2[d[i]]>0 && cnt1[d[i]]==0){
			count++;
		}
	}
	cout<<count+1;
}
