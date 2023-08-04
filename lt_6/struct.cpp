#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct person{
    int a,b;
    string ho,ten;
    void print(){
        cout<<a<<" "<<ten<<" "<<ho<<" "<<b;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    person t;
    cin>>t.a>>t.ten>>t.ho>>t.b;
    t.print();
    return 0;
}
