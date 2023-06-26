//  Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
//
//  Created by   : Mohamed Nayef on 13/06/2023.
//
 
#include <iostream>
#include <deque>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
 
    
    int tests;
    cin >> tests;
    while(tests--)
    {
        int x, y, sum=0;
        cin >> x >> y;
        int minimum = min(x,y);
        int maximum = max(x,y);
        
        for(int i=minimum+1; i<maximum; i++)
        {
            if(i%2 == 1)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}
