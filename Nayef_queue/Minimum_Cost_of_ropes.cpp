//
//  main.cpp
//  testcpp
//
//  Created by Mohamed Nayef on 13/06/2023.
//
 //https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/J
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
    
    unsigned int t, n;
    long long result=0;
    cin >> t;
    priority_queue<long long, vector<long long>, greater<long long>> q;
    
    for(unsigned int i=0; i<t; i++)
    {
        cin >> n;
        q.push(n);
    }
    while(!q.empty())
    {
        long long tmp = q.top();
        q.pop();
        if(q.empty()) break;
        result += tmp + q.top();
        q.push((tmp + q.top()));
        q.pop();
    }
    cout << result;
    
    return 0;
}
