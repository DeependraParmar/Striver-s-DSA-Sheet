/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int overallSum = 0;

        for(int i=0; i<=nums.size(); i++){
            overallSum += i;
        }

        int elementsSum = 0;
        for(int i=0; i<nums.size(); i++){
            elementsSum += nums[i];
        }

        return overallSum-elementsSum;
    }
};
*/