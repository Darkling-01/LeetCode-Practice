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


// 9. Palindrome Number

class Solution {
public:
    bool isPalindrome(int x) {
        long int rev_num = 0;
        long int s = x;
        while(x > 0){
            rev_num = rev_num * 10 + x % 10;
            x = x /10;
        }
        if (s == rev_num){
            return 1;
        }
        else{return 0;}
    }
};


// 26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                ++j;
            }
        }
        return j;
    }
};


// 27. Remove Element
// Runtime: 0 ms

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

// second solution for 27. ^
// but slower  Runtime: 5 ms
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i : nums){
            if(i != val){
                nums[index++] = i;
            }
        }
        return index;
    }
};





