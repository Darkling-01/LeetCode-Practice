// 35. Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        int i;
        int arr_size = nums.size();
        
        for(i=0; i < arr_size; i++){
            if(nums[i] >= target){
                return i; 
            }
        }

        return arr_size;

    }
};

// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> hash;
        int res{0};
        int majority{0};

        for(int i : nums){
            hash[i] = 1 + hash[i];
            if(hash[i] > majority){
                res = i;
                majority = hash[res];
            }
        }

        return res;

    }
};

