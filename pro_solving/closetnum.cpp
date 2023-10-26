vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int n=arr.size(),min=arr[1]-arr[0],minus=0;
    for(int i=1;i<n;i++){
        minus=arr[i]-arr[i-1];
        if(minus<=min){
            min=minus;
        }
    }
    vector<int> result;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==min){
            result.push_back(arr[i-1]);result.push_back(arr[i]);
        }
    }
    return result;
}