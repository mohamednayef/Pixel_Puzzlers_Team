#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string, int>p1, pair<string, int>p2) {
if(p1.second == p2.second){   // salary of p1 and salary of p2 
return p1.first < p2.first;   // names 
}

else
return p1.second > p2.second; // salary
}

int main()
{

 int n;
 cin>>n;
 
 vector < pair <string, long long> >  v(n);
 
 for(int i=0; i<n; i++){
     cin>> v[i].first>> v[i].second;
     
 }
 //cout <<endl;
 sort(v.begin() , v.end(), compare); 

for (int i=0; i<n; i++){
cout<<v[i].first <<" "<<v[i].second<<endl;
}

}
