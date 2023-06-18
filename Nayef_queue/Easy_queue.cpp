//https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/F
//
//  main.cpp
//  testcpp
//
//  Created by Mohamed Nayef on 13/06/2023.
//
 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    
 
    unsigned int t;
    cin >> t;
    queue<long long> d;
    long long tmp;
    
    for(int i=0; i<t; i++)
    {
        cin >> tmp;
        if(tmp == 1)
        {
            cin >> tmp;
            d.push(tmp);
        }
        else if(tmp == 2)
        {
            if(d.empty()) continue;
            d.pop();
        }
        else if(tmp == 3)
        {
            if(d.empty())
                cout << "Empty!\n";
            else
                cout << d.front() << '\n';
        }
    }
        
    return 0;
}
