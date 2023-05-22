#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{   long long n,y,order;
    string x;
    cin>>n;

    map<string,long long>m;;
    for(int i=0;i<n;i++){
          cin>> order >> x;
            if(order == 1){
               cin >> y;
               m[x]+=y;
             }
            if(order == 2){
               m.erase(x);
             }
            if(order == 3){
              cout<<m[x]<<endl;
             }
              y=0;
      }
    return 0;
}
