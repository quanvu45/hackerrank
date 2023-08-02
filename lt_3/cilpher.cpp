string caesarCipher(string s, int k) {
    string result;int c;k=k%26;
    for(int i=0;i<(int)s.length();i++){
        if(isalpha(s[i]) && isalpha((char)(s[i]+k))){
            if(tolower(s[i])){
                result+=(char)(s[i]+k);
            }else{
                result+=(char)toupper((char)(s[i]+k));
            }
            
        }else if(isalpha(s[i]) && !isalpha((char)(s[i]+k))){
            if(tolower(s[i])){
                c='z'-s[i];
                c=k-c-1;
                result+=(char)('a'+c);
            }else{
                char t=tolower(s[i]);
                c='z'-t;
                c=k-c-1;
                result+=(char)('A'+c);
                
            }
            
        }else{
            result+=s[i];
        }
    }
    return result;
}