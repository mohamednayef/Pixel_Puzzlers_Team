//  Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
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
    if(n==1)
    {
        cout << 0;
        return 0;
    }
    else if(n == 2)
    {
        cout << 0 << ' ' << 1;
    }
    cout << 0 << ' ' << 1 << ' ';
    n-=2;
    int n1=0, n2=1, tmp = n1+n2;
    while(n--)
    {
        cout << tmp << ' ';
        n1 = n2;
        n2 = tmp;
        tmp = n1 + n2;
    }
    cout << endl;
            
    
    return 0;
}
