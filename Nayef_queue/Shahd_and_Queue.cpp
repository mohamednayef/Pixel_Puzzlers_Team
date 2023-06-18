//https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/B
//
//  main.cpp
//  testcpp
//
//  Created by Mohamed Nayef on 13/06/2023.
//
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    unsigned int t;
    cin >> t;
    deque<int> d;
    
    string s;
    for(int i=0; i<t; i++)
    {
        cin >> s;
        if(s[0] == 'b')
        {
            if(d.size() == 0)
                cout << "No job for Shahd?\n";
            else
            {
                cout << d.back() << endl;
                d.pop_back();
            }
        }
        
        else if(s[0] == 'f')
        {
            if(d.size() == 0)
                cout << "No job for Shahd?\n";
            else
            {
                cout << d.front() << endl;
                d.pop_front();
            }
            
        }
        else if(s[0] == 'r')
            reverse(d.begin(), d.end());
        else if(s[0] == 'p')
        {
            short tmp;
            cin >> tmp;
            d.push_back(tmp);
        }
        else if(s[0] == 't')
        {
            short tmp1;
            cin >> tmp1;
            d.push_front(tmp1);
        }
    }
    
    
    return 0;
}
