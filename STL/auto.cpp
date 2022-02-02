#include<bits/stdc++.h>

using namespace std;

int main()
{
  vector <int> v = {2,3,4,5,6,7};

  for(int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  
  cout << endl ;
  
  vector <int> :: iterator it;
  
  for(it = v.begin(); it!=v.end(); it++)
  {
    cout << (*it) << " ";
  }
  cout << endl ;
  // using auto keyword 

  for(auto it2 = v.begin(); it2!=v.end(); it2++)
  {
    cout << (*it2) << " ";
  }

  vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
  cout << endl ;
  for(pair<int,int> &value : v_p)
  {
    cout << value.first << " " << value.second << endl;
  }

  cout << endl;
  cout << endl ;
  // using auto keyword 
  for(auto &value : v_p)
    {
      cout << value.first << " " << value.second << endl;
    }
}