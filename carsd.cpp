#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n, zz=0, nn=0;
    cin >> n;
    string s;
    cin >> s;
    
    for(int i=0; i<n; i++){
        if(s[i]=='z')
            zz++;
        else if(s[i]=='n')
            nn++;
    }
    while(nn--)
        cout << 1 << ' ';
    while(zz--)
        cout << 0 << ' ';
    
    
    }
