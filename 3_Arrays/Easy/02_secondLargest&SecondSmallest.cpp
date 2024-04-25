/*
vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> ans;
    int max = a[0];
    int sec_max = 0;
    int min = a[0];
    int sec_min = INT_MAX;

    for(int i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] > sec_max && a[i] != max)
            sec_max = a[i];

        if(a[i] < sec_min && a[i] != min)
            sec_min = a[i];
    }

    ans.push_back(sec_max);
    ans.push_back(sec_min);

    return ans;
}

*/