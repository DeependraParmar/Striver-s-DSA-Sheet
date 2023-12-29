/*
int returnDigits(int n){
    int ans = 0;
    while(n!=0){
        ans++;
        n/=10;
    }

    return ans;
}
bool checkArmstrong(int n){
    int digit = returnDigits(n);

    int num = n;
    int ans = 0;
    while(num!=0){
        int rem = num%10;
        ans = ans + pow(rem,digit);
        num/=10;
    }

    if(ans == n)
        return true;

    return false;
}

*/