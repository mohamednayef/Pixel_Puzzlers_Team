#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int size, dis_num = 0;
    cin >> size;

    vector<long long> v(size);

    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < size; i++) {
        if (v[i] != v[i + 1]) {
            dis_num++;
        }
    }

    cout << dis_num << endl;

    return 0;
}
