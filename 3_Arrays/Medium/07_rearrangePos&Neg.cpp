/*
vector<int> alternateNumbers(vector<int>&a) {
    int posIndex = 0, negIndex = 1, n = a.size();
    int i=0;
    vector<int> ans(n);

    while(i<n){
        if(a[i] < 0){
            ans[negIndex] = a[i++];
            negIndex = negIndex + 2;
        }
        else{
            ans[posIndex] = a[i++];
            posIndex = posIndex + 2;
        }
    }

    return ans;
}
*/