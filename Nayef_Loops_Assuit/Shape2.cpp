//  Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
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
 
    int n;
    cin >> n;
    int spaces = n-1;
    
    for(int i=1; i<=n; i++)
    {
        int spaces = n-i;
        for(int i=0; i<spaces; i++)
        {
            cout << ' ';
        }
        for(int j=0; j<2*i-1; j++)
        {
            cout << '*';
        }
        cout << endl;
        
    }
    
    
    return 0;
}
