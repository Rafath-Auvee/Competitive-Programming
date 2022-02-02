
#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector<vector<int>> v;

  int n;
  cin >> n;

  for(int i=0; i<n;i++)
  {
    int m;
    cin >> m;

    vector<int> temp;

    for(int j = 0; j < n ; j++)
    {
      int x;
      cin >> x;
      temp.push_back(x);
    }
    v.push_back(temp);
  } 
}