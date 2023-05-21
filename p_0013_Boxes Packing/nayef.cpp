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
    for(int i=0; i<t; i++){
        string s;
        
        int n, mark;
        cin >> n;
        
        if(n==1){
            cin >> s >> mark;
            
            m[s]+=mark;
        }
        else if(n == 2){
            cin >> s;
            m[s] = 0;
        }
        else if(n == 3){
            cin >> s;
            cout << m[s] << endl;
        }
    }
    
    return 0;
}
