/*
vector<int> moveZeros(int n, vector<int> a) {
    int left = 0;
    for(int right = 0; right<n; right++){
        if(a[right] != 0){
            swap(a[left++], a[right]);
        }
    }
    return a;
}

*/