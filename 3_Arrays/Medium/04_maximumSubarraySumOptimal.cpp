/*
long long maxSubarraySum(vector<int> arr, int n)
{
    long long maximum = LONG_MIN, sum = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maximum)
            maximum = sum;

        if(sum < 0)
            sum = 0;
    }

    if(maximum < 0)
        maximum = 0;

    return maximum;
}
*/