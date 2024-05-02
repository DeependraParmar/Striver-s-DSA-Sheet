/*
long long maxSubarraySum(vector<int> arr, int n)
{
    long long maximum = INT_MIN;

    for(int i=0; i<n; i++){
        long long sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];

            maximum = max(sum, maximum);
        }
    }

    return maximum;
}
*/