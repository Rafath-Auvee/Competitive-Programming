
#include<bits/stdc++.h>

using namespace std;

int main()
{
   pair<int, string> p;

  p = make_pair(3, "cbc");
  // p = {2, "abc"};
  cout << p.first << " " << p.second;

  // arrays 

  int a[] = {1,2,3};
  int b[] = {2,3,4};

  // pair with arrays 


  pair <int , int > p_array [3] ;
  
  p_array[0] = {1,2};
  p_array[1] = {3,4};
  p_array[2] = {2,5};

  swap(p_array[0], p_array[1]);

  
  
}