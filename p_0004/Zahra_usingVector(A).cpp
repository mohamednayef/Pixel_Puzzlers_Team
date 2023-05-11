//problem-link:https://codeforces.com/group/SbXdq02gzF/contest/427087/problem/A
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

void push_back(int x) {
    v.push_back(x);
}

void pop_back() {
    v.pop_back();
}

int front() {
    return v.front();
}

int back() {
    return v.back();
}

void sort(int l, int r) {
    sort(v.begin() + l - 1, v.begin() + r);
}

void reverse(int l, int r) {
    reverse(v.begin() + l - 1, v.begin() + r);
}

int print(int pos) {
    return v[pos - 1];
}

int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;
        if (query == "pop_back") {
            pop_back();
        } else if (query == "front") {
            cout << front() << endl;
        } else if (query == "back") {
            cout << back() << endl;
        } else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            sort(l, r);
        } else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(l, r);
        } else if (query == "print") {
            int pos;
            cin >> pos;
            cout << print(pos) << endl;
        } else if (query == "push_back") {
            int x;
            cin >> x;
            push_back(x);
        }
    }
    return 0;
}
