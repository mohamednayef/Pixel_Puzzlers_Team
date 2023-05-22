
#include <iostream>
#include <string>
#include<map>
using namespace std;
 
int main() {
    int t;
    cin >> t; 
    map <string,int> m;
    while(t--){
       int n,marks;
       string name;
       cin>>n;
       if(n==1){
       cin>> name>> marks;
       m [name] += marks;
       }
       else if(n==2){
       cin>>name;
       m.erase(name);
       m[name] == 0;
       }
       else if(n==3){
           cin>>name;
           cout<<m[name]<<endl;
       }
       
    }
    
    return 0;
}
