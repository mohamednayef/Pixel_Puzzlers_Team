//
//
//  main.cpp
//  testcpp
//
//  Created by Mohamed Nayef on 13/06/2023.
//
// link the problem
//https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/C
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    short t, x;
    cin >> t >> x;
    
 
    deque<char> d;
    char c;
    for(int i=0; i<t; i++)
    {
        cin >> c;
        d.push_back(c);
    }
    while(x--)
    {
 
    
        for(short i=0; i<t-1; i++)
        {
            if(d[i] == 'B' && d[i+1] == 'G')
            {
    
                d[i] = 'G';
                d[i+1]='B';
                i++;
            }
        }
 
    }
    while(!d.empty())
    {
        cout << d.front();
        d.pop_front();
    }
    
    
    cout << '\n';
    
    return 0;
}
