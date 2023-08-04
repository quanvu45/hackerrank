#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    int age,standard;
    string first_name,last_name;
    public:
    Person(int a,string b,string c,int d):age(a),first_name(b),last_name(c),standard(d){}
    Person():age(0),first_name(""),last_name(""),standard(0){}
    int get_age(){return age;}
    string get_first(){return first_name;}
    string get_second(){return last_name;}
    int get_standard(){return standard;}
    void setAge(int a){this->age=a;}
    void setStandard(int a){this->standard=a;}
    void setFirst(string a){this->first_name=a;}
    void setLast(string a){this->last_name=a;}
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    Person a;
    int b;string c;
    cin>>b;a.setAge(b);
    cin>>c;a.setFirst(c);
    
    cin>>c;a.setLast(c);cin>>b;a.setStandard(b);
    cout<<a.get_age()<<'\n'<<a.get_second()<<", "<<a.get_first()<<'\n'<<a.get_standard()<<'\n';cout<<endl;
    cout<<a.get_age()<<','<<a.get_first()<<','<<a.get_second()<<','<<a.get_standard();
      
    return 0;
}
