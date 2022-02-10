/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        
        if(nums.size()<3){
            return ans;
        }

        int current, low, high;

        for(int i = 0; i< nums.size(); i++)
        {
            
            if(i>0 && (nums[i]==nums[i-1]) )continue;
            
            low = i + 1; 
            high = nums.size() - 1;

            while(low<high)
            {
                current = nums[i] + nums[low] + nums[high];

                if(current == 0)
                {
                    ans.push_back({nums[i],nums[low],nums[high]});
                    high--;
                }
                else if(current> 0)
                {
                    high--;
                }
                else
                {
                    low++;
                }

            }
        }
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        return ans;
    }
};
// @lc code=end

