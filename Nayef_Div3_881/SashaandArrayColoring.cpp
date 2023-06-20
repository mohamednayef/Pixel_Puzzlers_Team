//  Problem link : https://codeforces.com/contest/1843/problem/A
//
//  Created by   : Mohamed Nayef on 13/06/2023.
//
 
#include <iostream>
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
        int size, result=0;
        cin >> size;
        int arr[size];
        for(int i=0; i<size; i++)
            cin >> arr[i];
        sort(arr, arr+size);
        
        if(size > 3)
        {
            for(int i=0; i<size/2; i++)
            {
                result += arr[size-i-1] - arr[i];
            }
        }
        else if( size == 3)
        {
            cout << arr[2] - arr[0] << '\n';
            continue;
        }
        else if(size == 2)
        {
            cout << arr[1] - arr[0] << '\n';
            continue;
        }
        else if(size == 1)
        {
            cout << 0 << '\n';
            continue;
            
        }
        else {}
        cout << result << '\n';
    }
    
    
    return 0;
}
