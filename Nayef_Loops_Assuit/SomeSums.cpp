//  Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
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
    
    
 
    int n, a, b, sum=0;
    cin >> n >> a >> b;
    
    for(int i=1; i<=n; i++)
    {
        int ii = i;
        
        int tmp=0;
        while(ii>0)
        {
            tmp += ii%10;
            ii=ii/10;
          //  cout << '2';
        }
        if(tmp>=a && tmp<=b)
            sum += i;
        //cout << 'w';
    }
    cout << sum;
    
    return 0;
}
