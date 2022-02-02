
#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector <int> v;
  vector<pair<int,int>> p;

  // p = {{1,2},{3,4},{4,5}};

  int n;
  cin >> n;

  for(int i = 0 ;i < n ; i++)
  {
    int x,y;
    cin >> x >> y;
    p.push_back({x,y});
  }

  for(int i = 0 ;i < p.size() ; i++)
  {
    cout << p[i].first<< " " << p[i].second << endl;
  }
}