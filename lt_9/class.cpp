#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    int age;
    public:
    Person(int initalAge){
        if(initalAge<0){
            cout<<"Age is not valid, setting age to 0."<<'\n';
            age=0;
        }else{
            age=initalAge;
        }
    }
    void yearPass(){
        this->age++;
    }
    void amIOld(){
        if(this->age<13){
            cout<<"You are young."<<'\n';
        }else if(this->age>=18){
            cout<<"You are old."<<'\n';
        }else{
            cout<<"You are a teenager."<<'\n';
        }
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int T,age;
   cin>>T;
   vector<Person> personas;
  for (int i = 0; i < T; i++) {
        cin >> age;
        personas.push_back(Person(age));

        personas[i].amIOld();
        for (int j = 0; j < 3; j++) {
            personas[i].yearPass(); 
        }
        //cout<< p.getAge()<<endl;
        personas[i].amIOld();
        cout<<'\n';
    }
   
    
    
    return 0;
}
