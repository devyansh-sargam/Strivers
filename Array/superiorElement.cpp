vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for(int i = n-1; i>=0; i--){
        if(a[i]>maxi){
            ans.emplace_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(),ans.end());
    return ans;
}