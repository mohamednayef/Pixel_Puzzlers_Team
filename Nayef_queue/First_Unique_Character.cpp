//https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/A
#include <iostream>
#include <map>
#include <deque>
#include <list>
using namespace std;

int main(){    
    map<char, int> mp;
    
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    
    for(int i=0; i<s.size(); i++){
        if(mp[s[i]]==1){
            cout << i;
            return 0;
        }
    }
    cout << -1 << endl;
    
    return 0;
}
