#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sf=0, fs=0;
    
    for(int i=0; i<n; i++){
        if(s[i]=='S' && s[i+1]=='F')
            sf++;
        else if(s[i]=='F' && s[i+1]=='S')
            fs++;
    }
    
    if(sf > fs)
        cout << "YES";
    else
        cout << "NO";
    
    
    
    
}
