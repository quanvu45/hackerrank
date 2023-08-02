nt getTotalX(vector<int> a, vector<int> b) {
    int lcma=1,gcdb=0,count=0,t=0;
    for(int i=0;i<(int)a.size();i++){
        lcma=lcm(lcma,a[i]);
    }
    for(int i=0;i<(int)b.size();i++){
        gcdb=gcd(gcdb,b[i]);
    }
    if(gcdb%lcma==0){
        for(int i=1;i<=gcdb/lcma;i++){
            if(gcdb%(lcma*i)==0){count++;t=1;}
        }
    }
    return count;
}