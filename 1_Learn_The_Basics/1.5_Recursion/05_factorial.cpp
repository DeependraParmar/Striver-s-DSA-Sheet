/*
vector<long long> factorialNumbers(long long n) {

    if(n==0)
        return {};

    vector<long long> ans;
    long long fact = 1;

    for(int i=1; fact*i<=n; i++){
        fact*=i;
        ans.push_back(fact);
    }

    return ans;
}
*/