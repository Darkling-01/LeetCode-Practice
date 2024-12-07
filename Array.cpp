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
