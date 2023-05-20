#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n; // 7
    vector <long long> arr(n);
   
     int count=0;
     
    for(int i=0; i<n; i++){
        cin>>arr[i]; 
        if(arr[i] == 1){
            count ++;
        }
    }
    cout<<count<<endl; // first line in output
    
     for(int i=1; i<n; i++){
                                // 1 2 3 1 2 3 4 
        if(arr[i]==1) {
          
        cout << arr[i-1] << " ";  // 3  
        
}
}
cout<<arr.back(); // 4 
     
}
