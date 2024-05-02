/*
void printMaxSubarraySum(vector<int> arr, int n)
{
    int maximum = LONG_MIN, sum = 0;
    int arrStart = -1, ansEnd = -1;

    for(int i=0; i<n; i++){
        if(sum == 0)
            arrStart = i;

        sum += arr[i];

        if(sum > maximum){
            maximum = sum;
            ansEnd = i;
        }

        if(sum < 0)
            sum = 0;
    }

    for(int i=ansStart; i<=ansEnd; i++){
        cout << arr[i] << " ";
    }
}
*/