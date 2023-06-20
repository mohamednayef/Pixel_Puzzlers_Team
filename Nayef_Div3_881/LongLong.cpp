//  Problem link : https://codeforces.com/contest/1843/problem/B
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
    bool state = true;
    cin >> tests;
    
    while(tests--)
    {
        int size, result=0;
        cin >> size;
        long long arr[size], sum=0;
        cin >> arr[0];
        if(arr[0] <0)
        {
            result++;
            state = true;
            sum+=abs(arr[0]);
        }
        else
        {
            state = false;
            sum += abs(arr[0]);
        }
        
        for(int i=1; i<size; i++)
        {
            cin >> arr[i];
            if(arr[i] < 0 && state == false)
            {
                result++;
                state = true;
            }
            else if (arr[i]>0)
            {
                state = false;
                //sum+= abs(arr[i]);
            }
            //if(arr[i]<0 && arr[i-1]>0)
            sum += abs(arr[i]);
            
        }
        cout << sum << ' ' << result << '\n';
    }
    
        
    
    return 0;
}
