/*
int majorityElement(vector<int> v) {
    int n = v.size();

    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=i+1; j<n; j++){
            if(v[j] == v[i])
                count++;
        }

        if(count > n/2)
            return v[i];
    }

    return -1;
}
*/