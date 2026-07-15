class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>found;
        for(int i = 0;i<nums.size();i++){
            int sum = target - nums[i];
            if(found.count(sum)){
                return {found[sum], i};
            }
            found[nums[i]] = i;
        }
        return {};
    }
};
