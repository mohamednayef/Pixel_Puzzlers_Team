#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{   int n;
    string name;
    cin>>n;
    multiset<string>s;

    for(int i=0;i<n;i++){
        cin>>name;
         if(s.count(name) == 0){
            s.insert(name);
            cout<<"OK\n";
         }else{
           cout << name << s.count(name) <<endl;
            s.insert(name);

         }
    }
    return 0;
}
