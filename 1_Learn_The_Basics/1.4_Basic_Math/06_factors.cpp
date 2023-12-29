/*
int sumOfDivisors(int n){
    int ans = 0;
    int sq = sqrt(n);

    for(int i=1; i<=sq; i++){
        if(n%i==0){
            ans+=i;

            if((n/i) != i){
                ans+=(n/i);
            }
        }
    }
    return ans;
}
int sumOfAllDivisors(int n){
    int ans = 0;

    for(int i=1; i<=n; i++){
        ans += sumOfDivisors(i);
    }

    return ans;
}
*/