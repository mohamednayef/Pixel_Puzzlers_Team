//  Problem link : https://codeforces.com/contest/1843/problem/C
//
//  Created by   : Mohamed Nayef on 13/06/2023.
//
 
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
unsigned long long sum(unsigned long long n);
 
int main()
{
    ios_base::sync_with_stdio(0);
   cout.tie(0);
   cin.tie(0);
 
    int tests;
    cin >> tests;
    
    while(tests--)
    {
        unsigned long long number;
        cin >> number;
        cout << sum(number) << '\n';
        
    }
        
    
    return 0;
}
 
unsigned long long sum(unsigned long long n)
{
    unsigned long long result=n;
    while(n/=2)
        result +=n ;
    return result;
}
