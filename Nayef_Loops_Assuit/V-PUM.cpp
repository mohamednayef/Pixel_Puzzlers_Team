//  Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
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
 
    
    int n, k=1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << k << ' ';
            k++;
        }
        cout << "PUM\n";
        k++;
    }
    
    
    
    return 0;
}
