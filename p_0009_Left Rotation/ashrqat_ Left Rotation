#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    if(s>0){
    rotate(arr.begin(), arr.begin() + s, arr.end());
}
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    
    cout << endl;
    
    return 0;
}
