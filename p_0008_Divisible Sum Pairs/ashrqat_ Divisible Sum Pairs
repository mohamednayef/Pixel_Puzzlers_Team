#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    vector <long long> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];     //6 3
                         //1 3 2 6 1 2
    }
    int count =0;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            
    if ((arr[i] + arr[j]) % k == 0){ // 1+3 // 1+2 t // 1+6// 1+1  // 1+2 t c= 2
            count += 1;             //  3 +2 // 3+6 t // 3+1// 3+2  c= 3   
          }                         //  2+6 // 2+1 t // 2+2   c= 4
        }                           // 6+1 // 6+2 
}                                   // 1+2 t // c=5
   cout<<count;
}
