// https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/B
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
 
int main() {
    deque<int> q;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        if (s == "push_back") {
            int x;
            cin >> x;
            q.push_back(x);
        }
        else if (s == "toFront") {
            int x;
            cin >> x;
            q.push_front(x);
        }
        else if (s == "front") {
            if (q.empty()) {
                cout << "No job for Shahd?" << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop_front();
            }
        }
        else if (s == "back") {
            if (q.empty()) {
                cout << "No job for Shahd?" << endl;
            }
            else {
                cout << q.back() << endl;
                q.pop_back();
            }
        }
        else if (s == "reverse") {
            reverse(q.begin(), q.end());
        }
    }
    return 0;
}
