//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void queries(int n,int q){

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

while (q--) {
        string choice;
         cin>>choice;
        
        if(choice== "pop_back"){
        arr.pop_back();
        }
        
        else if(choice== "push_back"){
        int e;
        cin>>e;
        arr.push_back(e);
        }
        
        else if (choice== "sort") {
        int x,y;
        cin>>x>>y;
         x=x-1;
         y=y-1;
      
        //sort(arr.begin() + x-1 , arr.begin() + y); first method
        sort(arr.begin() + x , arr.begin() + y+1); // second method 
        }
        
        else if (choice=="reverse" ){
        int a,b;
        cin>>a>>b;
        a=a-1;
        b= b-1;
        //reverse(arr.begin() + a-1, arr.begin() + b);
        reverse(arr.begin() + a, arr.begin() + b+1);
        }
        
        else if(choice== "front" ){ //print
        cout<<arr.front()<<endl;
        }
        
        else if(choice== "back" ){//print
        cout<<arr.back()<<endl;
        }
        
       else if(choice==  "print" ){//print
        int p;
        cin>>p;
        cout<<arr[p-1]<<endl;
    
       }
        }
}
int main(){

  int n,q;

  cin>>n>>q;

  queries(n,q);
    
 }