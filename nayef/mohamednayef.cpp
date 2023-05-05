#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int even = 0, odd = 0;
        int n, tmp;
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> tmp;
            if(tmp%2==0)
                even += tmp;
            else
                odd += tmp;
        }
        if(even > odd)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
