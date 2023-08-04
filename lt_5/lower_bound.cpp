#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // int n,t,nquery,i=0,j=0;cin>>n;
    // vector<int> arr;
    // vector<int> query;
    // for(int i=0;i<n;i++){
    //     cin>>t;
    //     arr.push_back(t);
    // } 
    // cin>>nquery;
    // for(int i=0;i<nquery;i++){
    //     cin>>t;
    //     query.push_back(t);
    // }
    // for(int i=0;i<nquery;i++){
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==query[i]){
    //             cout<<"Yes"<<" "<<j+1<<'\n';break;
    //         }else if(arr[j+1]>query[i]){
    //             cout<<"No"<<" "<<j+2<<'\n';break;
    //         }
    //     }
        
        
    // }
    // map<int,int> query_in;

    // while(j!=nquery){
    //     if(arr[i]==query[j]){
    //         cout<<"Yes "<<i+1<<'\n';
    //         j++;
    //     }else if(arr[i]<query[j]){
    //         i++;
    //     }else{
    //         cout<<"No "<<i+1<<'\n';
    //         j++;
    //     }
    // }
    int n, q, temp, num;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> num;
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), num);
        auto vitri = low - v.begin();
        if (*low == num)
        {
            cout << "Yes"
                 << " " << vitri + 1 << endl;
        }
        else
        {
            cout << "No"
                 << " " << vitri + 1 << endl;
        }
    }
    return 0;
}
