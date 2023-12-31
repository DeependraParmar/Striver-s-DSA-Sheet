/*
vector<int> generateFibonacciNumbers(int n) {
    vector<int> ans;

    if(n==1){
        ans.push_back(0);
        return ans;
    }

    int a=0;
    int b=1;

    ans.push_back(a);
    ans.push_back(b);

    for(int i=3; i<=n; i++){
        int temp = a + b;
        ans.push_back(temp);
        a = b;
        b = temp;
    }

    return ans;
}
*/