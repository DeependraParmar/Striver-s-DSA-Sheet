/*
long long maxSubarraySum(vector<int> arr, int n)
{
    long long maximum = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            long long sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }

            maximum = max(maximum, sum);
        }
    }

    return maximum;
}
*/