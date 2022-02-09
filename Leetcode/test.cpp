#include<bits/stdc++.h>

using namespace std;
 
int main()
{
        int n,a; 
        cin >> n;
        vector<int> nums;
        for(int i = 0; i < n ; i ++ )
        {   
            cin >> a;
            nums.push_back(a);
        }

        sort(nums.begin(), nums.end());

        vector<int>::iterator ip;

        ip = unique(nums.begin(), nums.begin() + n);
            
        nums.resize(distance(nums.begin(), ip));

        for(auto &c : nums)
        {
          cout << c ; 
        }
  

 
}