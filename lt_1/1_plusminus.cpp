#include <bits/stdc++.h>

using namespace std;
void plusMinus(vector<int> arr) {
    double len=arr.size();
    double a,b,c;
    for(int i=0;i<len;i++){
        if(arr[i]>0){
            a++;
        }else if(arr[i]<0){
            b++;
        }else{
            c++;
        }
    }
    char e[100];
    sprintf(e,"%06lf\n%06lf\n%06lf",a/len,b/len,c/len);
   // cout<<setprecision(6);
    for(int i=0;i<26;i++){
    cout<<e[i];
	}
    //cout<<a/len<<'\n'<<b/len<<'\n'<<c/len<<'\n';
}

int main()
{

    vector<int> arr;
    int t,n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>t;
        arr.push_back(t);
    }

    plusMinus(arr);

    return 0;
}
