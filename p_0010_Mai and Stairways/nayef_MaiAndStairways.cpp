#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k=0;
    vector<int> v;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];    
    }
 
    for(int i=0; i<n-1; i++){
        if(arr[i+1] <= arr[i])
        {
            v.push_back(arr[i]);
            k += 1;
        }
    }
    if(arr[n-1]<=arr[n-2]) {
        v.push_back(1);
        k += 1;    
    }
    else{
        v.push_back(arr[n-1]);
        k += 1;
    }
    cout << k << endl;
    for(int i=0; i<v.size(); i++){
        if(i==v.size()-1) {cout << v[i]; return 0;}
        cout << v[i] << ' ';
// wow
}
    
    
 
}
