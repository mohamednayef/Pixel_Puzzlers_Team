#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    long long x;
    cin>>n>>x;
    vector<long long> v(n);
    
     for(int i=0; i<n; i++){
     cin>> v[i]; 
 }

     for(int i=0; i<n; i++){
         for(int j=i+1; j<n; j++){
    if(v[i] + v[j] == x ){
        cout<<i+1<<" "<<j+1;
        return 0;
    }
   
     }
 
 }
 
}
