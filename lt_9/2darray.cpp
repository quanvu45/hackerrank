#include<bits/stdc++.h>
using namespace std;
int main(){
    int**arr=new int*[6];
    vector<int> sum ;
    int t;
    for(int i=0;i<6;i++){
        arr[i]=new int[6];
    }
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        
        for(int j=0;j<4;i++){
            t=0;
            t=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum.push_back(t);
        }
        
    }
    for(int i=0;i<(int)sum.size();i++){
        cout<<sum[i]<<" ";
    }
}