//problem link : https://codeforces.com/problemset/problem/1822/B
#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

long long max_beauty(){
    long long n,result;
    cin>>n;
    vector<long long>arr(n);
        for(int i=0 ; i<n ; i++){
             cin >> arr[i];
        }

    sort(arr.begin(),arr.end());
    result = max(arr[0] * arr[1] , arr[n-1] * arr[n-2]);
    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        cout << max_beauty() << endl;
    }

    return 0;
}
