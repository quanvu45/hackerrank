#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int height = 0, q = 0, lenght=0, value, m = 0, n= 0;
    cin>>height>>q;  
    vector<vector<int>> vect(height);
    
    for(int i = 0; i<vect.size(); i++){
        cin>>lenght; 
        vector<int>vect_0(lenght); 
        vect[i] =  vect_0; 
        for(int j = 0; j<vect_0.size(); j++){
            cin>>value;
            vect_0[j] = value;
        }
        vect[i] =  vect_0;
    }

    for(int i = 0; i<q; i++){
        cin>>m>>n; 
        vector<int>vector_1 = vect[m]; 
        cout<<vector_1[n]<<"\n"; 
    }
    return 0;
}