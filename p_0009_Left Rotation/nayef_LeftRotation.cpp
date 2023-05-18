#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long n, d;
    cin >> n >> d;
    long long arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long *p = arr;
    p+=d;
    
    for(int i=0; i<=n; i++){
        if(p != &arr[n]){
            cout << *p << ' ';
            p++;
        }
        else p = arr;
    }
    
    
    
    return 0;
}
