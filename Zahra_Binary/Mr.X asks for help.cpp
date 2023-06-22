//PL : https://codeforces.com/group/SbXdq02gzF/contest/431638/problem/B
/*
For each test case, it checks from element 0 to high (which is the cube root of the number entered by the user) and compares it to the sum
 (which is the addition of the low and high power 3)
      >> If sum > x, then we need to decrease the hi value and looping again
      >> If sum < x, then we need to increase the lo value and looping again 
      >> until it equals the sum value, then the equation  a^3+b^3=x is achieved and returns true to the main function and prints YES
          otherwise, No
*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool binarySearch(long long x) {
    long long lo = 1, hi = cbrt(x);
    while (lo <= hi) {
        long long sum = lo * lo * lo + hi * hi * hi;
        if (sum == x) {
            return true;
        } else if (sum < x) {
            lo++;
        } else {
            hi--;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        long long x;
        cin >> x;
        if (binarySearch(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
