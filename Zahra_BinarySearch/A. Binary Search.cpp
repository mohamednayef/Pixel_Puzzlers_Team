//Problem Link : https://codeforces.com/group/SbXdq02gzF/contest/431638/problem/A
#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(long long arr[], int l, int h, int key){
    while (l <= h) {
        int m = (l + h) / 2;
        if (arr[m] == key) 
            return true;
          else if (arr[m] < key) 
            l = m + 1;
          else 
            h = m - 1;
    }
    return false;
}

int main() {
    long long n, t,q;
    cin >> n >> t;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if(binarySearch(arr, 0, n - 1, x))
            cout<<"YES\n";
        else
            cout<<"No\n";
    }
    return 0;
}
