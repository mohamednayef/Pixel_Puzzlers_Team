#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

 int n;
 cin>>n;
 
 vector <long long> v(n);

 for(int i=0; i<n; i++){
     
     cin>> v[i];
    
 }
 int counter=0;
 sort(v.begin(), v.end());
 
  for(int i=0; i<n; i++){
    if(v[i] != v[i+1]) {
        
         counter ++;
     }
 }
 cout<<counter<<endl;
 

}

