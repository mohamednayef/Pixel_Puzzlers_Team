// https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/A
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<int, int> v;
    int n,q;
    cin>>n>>q;

    for(int i=0; i<q; i++){
        int z, x;
        cin>>z>>x;

        if (z == 1){
            v[x]++;
        }  if (z == 2) {
            cout << v[x] << endl;
        }
    }

    return 0;
}
