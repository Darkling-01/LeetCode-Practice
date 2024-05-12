// 1. Two Sum

class Solution {
public:
    // Two-pass hash table
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> numMap;
        // build the hash table
        for(int i = 0; i < nums.size(); ++i){
            numMap[nums[i]] = i;
        }
        // find the complement
        for(int i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if(numMap.count(complement) && numMap[complement] != i){
                return {i, numMap[complement]};
            }
        }

        return {};
    }
};


