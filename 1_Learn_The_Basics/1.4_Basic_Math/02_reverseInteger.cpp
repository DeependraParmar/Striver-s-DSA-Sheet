/*
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int n = x;

        if(n==0)
            return 0;

        while(n!=0){
            int rem = n%10;

            if(ans > INT_MAX/10 || ans< INT_MIN/10)
                return 0;

            ans = (ans*10) + rem;
            n /= 10;
        }

        return ans;
    }
};
*/