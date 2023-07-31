string hackerrankInString(string s) {
    string result="NO";
    char len[12]="hackerrank ";int j=0;
    for(int i=0;i<(int)s.length();i++){
        if(s[i]==len[j]){
            j++;
        }
        if(j>9){
            result="YES";
        }
    }
    return result;
}