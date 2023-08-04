#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    int scores[5];
    public:
    void getscores(){
        for(int i=0;i<5;i++){
            cin>>scores[i];
        }
    }
    int calculateTotalScore(){int sum;
        for(int i=0;i<5;i++){
            sum+=scores[i];
        }
        return sum;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,count=0;
    cin>>n;
    student*a=new student[n];
    for(int i=0;i<n;i++){
        a[i].getscores();
    }
    int k=a[0].calculateTotalScore();
    for(int i=0;i<n;i++){
        if(a[i].calculateTotalScore()>k){
            count++;
        }
    }cout<<count;
    return 0;
}
