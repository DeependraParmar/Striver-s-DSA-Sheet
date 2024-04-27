/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapping;

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int remaining = target - num;

            if(mapping.find(remaining) != mapping.end()){
                return {mapping[remaining], i};
            }

            mapping[num] = i;
        }

        return {-1,-1};
    }
};
*/