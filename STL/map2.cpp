#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
  cout << m.size() << endl;
  for(auto &pr :m )
  {
    cout << pr.first << " " << pr.second << endl;
  }
}

int main()
{
  map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[6] = "acd";
  m.insert({4, "zzz"});
  m[7];
  // print(m);
  

  auto it = m.find(6);

  if(it == m.end())
  {
    cout << "No Value";
  }
  else
  {
    cout << (*it).first << " " << (*it).second << endl;
  }




  // for(auto it = m.begin(); it != m.end(); it++)
  // {
  //   cout << (*it).first << " " << (*it).second << endl;
  // }

}