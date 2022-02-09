/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) 
            return 0;

        int j = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                j++;
            }else{
                nums[i-j] = nums[i];
            }
        }
        nums.erase(nums.end()-j , nums.end());
        return nums.size();
    }
};
//nums = [0,0,1,1,1,2,2,3,3,4]
// @lc code=end

