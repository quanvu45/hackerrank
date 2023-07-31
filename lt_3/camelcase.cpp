int camelcase(string s) {
    int count =0;
    for(auto it :s){
        if(it==toupper(it)){
            count++;
        }
    }
    return count+1;
}