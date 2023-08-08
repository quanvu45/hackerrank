#include<bits/stdc++.h>
using namespace std;
char arr[4]={'a','b','c','d'};
char result[4];
void backtrack(int a);
int main(){
    backtrack(1);
}
void backtrack(int a){
    if(a>3){
        for(int i=1;i<=3;i++){
            cout<<result[i];
        }
        cout<<'\n';
        return ;
    }
    for(int i=0;i<4;i++){
        result[a]=arr[i];
        backtrack(a+1);
    }
}