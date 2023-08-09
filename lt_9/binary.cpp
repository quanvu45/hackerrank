#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    int k=0;
    vector<int>a;
    while(n!=0)
    {
        k=n%2;
        a.push_back(k);
        n=n/2;
    }
    int c=0,m=0;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==1)
        c++;
        else
        {
            c=0;
        }
        m=max(m,c);
        
    }
    cout<<m;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
