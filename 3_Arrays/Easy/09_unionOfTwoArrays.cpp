/*
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0, j=0;
    int n = a.size(), m = b.size();

    vector<int> ans;

    while(i<n && j<m){
        if(a[i] == a[i+1])
            i++;

        else if(b[j] == b[j+1])
            j++;

        else if(a[i] > b[j]){
            ans.push_back(b[j++]);
        }
        else if(a[i] < b[j])
            ans.push_back(a[i++]);
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    while(i<n)
        ans.push_back(a[i++]);

    while(j<m)
        ans.push_back(b[j++]);

    return ans;
}
*/