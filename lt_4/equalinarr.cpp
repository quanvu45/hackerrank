int equalizeArray(vector<int> arr) {
    int t=arr.size();
    map<int,int> a;
    for(auto it:arr){
        a[it]++;
    }
    int max=0;
    for(auto it:a){
        if(it.second >max){
            max=it.second;
        }
    }
    return t-max;
}