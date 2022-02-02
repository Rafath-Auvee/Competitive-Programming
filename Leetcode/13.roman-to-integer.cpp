/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include <bits/stdc++.h> 
using namespace std; 
// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int ans =0;
    int i=0;
    while(i< s.size()){
        if(s.substr(i,2)== "IX" || s.substr(i,2)=="CM" || s.substr(i,2)=="XL" || s.substr(i,2)=="CD" || s.substr(i,2) =="IV" || s.substr(i,2)=="XC"){
            ans += mp[s[i+1]] - mp[s[i]];
            i+=2;
            continue;
        }
        ans+= mp[s[i]];
        i++;
    }
   return ans;
    }
};
// @lc code=end

