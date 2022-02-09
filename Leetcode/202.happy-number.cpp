/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        int a=n;
        int  long sum=0;
        if(n>1 && n<7)
        {
            return false;
        }
            
        while(a>0)
        {
            int b = a%10;
            int z = pow(b,2);
            sum = sum + z;
            a=a/10;
        }
        
        if(sum==1)    
        {
                return true;
        }
        else
        {
            return isHappy(sum);
        }
           
    }     
};
// @lc code=end

