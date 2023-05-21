#include <iostream>
#include <map>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    map<string, int> m;
    while(t--){
        string s;
        cin >> s;
        
        if(m[s]>0){
            cout << s << m[s] << endl;
            m[s]++;
        }
        else{
            cout << "OK" << endl;
            m[s]++;
        }
    }
    
    
    
    return 0;
}
