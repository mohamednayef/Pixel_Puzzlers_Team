// https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/C
#include <iostream>
#include <deque>
#include<algorithm>
using namespace std;
 
int main() {
    deque<char > q;
    int n,t;
    cin >>n >>t;
    char c;
    for(int i=0; i<n; i++)
    {
        cin >> c;
        q.push_back(c);
    }
    while (t--){
        for(int i=0; i<n; i++){
            if(q[i]=='B' && q[i+1]=='G'){
              swap(q[i],q[i+1]);
              i++;
            }
        }
    }
    for(int i=0; i<n; i++){
       cout << q.front();
        q.pop_front();
    }
}
