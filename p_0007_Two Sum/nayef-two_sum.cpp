#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, x;
    cin >> n >> x;
    int arr[n];
    
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i] + arr[j] == x){
                cout << i+1 << ' ' << j+1;
                return 0;
            }
        }
    }
    

    return 0;
}
