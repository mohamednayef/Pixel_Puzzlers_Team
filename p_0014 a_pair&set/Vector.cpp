// https://codeforces.com/group/isP4JMZTix/contest/392597/problem/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
  vector<int> v;
  
  for (int i=0; i<1e6; i++){
      
      if(i % 3==0 || i % 10 ==3 )
      continue;
      else
      v.push_back(i);
      
  }
  while(n--)
	{
		int j;
		cin>>j;
		cout<<v[j-1]<<endl;
	}
  
  
}
