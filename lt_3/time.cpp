#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string d;
    int a=(s[0]-'0')*10+s[1]-'0';

    if(s[8]=='A' && a>=12){
        d=d+"00:"+s[3]+s[4]+':'+s[6]+s[7];
    }else if(s[8]=='P' && a<12){
        
        a+=12;
        int x=a/10,y=a%10;
        d=d+(char)('0'+x)+(char)('0'+y)+':'+s[3]+s[4]+':'+s[6]+s[7];
    }else{
        for(int i=0;i<8;i++){
            d+=s[i];
        }
    }
    return d;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
