/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> isVisited(false);

        for(int i=0; i<nums.size(); i++){
            isVisited[nums[i]] = true;
        }

        int ans = nums.size();
        for(int i=0; i<nums.size(); i++){
            if(isVisited[i] == false)
                ans = i;
        }

        return ans;
    }
};
*/