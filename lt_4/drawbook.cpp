int pageCount(int n, int p) {
    int coun1=0,coun2=0,i=1;
    while(i!=p){
        if((i+1)%2==0){
            coun1++;
        }
        i++;
    }
    i=n;
    while(i!=p){
        if((i-1)%2!=0){
            coun2++;
        }
        i--;
    }
    return min(coun1,coun2);
}