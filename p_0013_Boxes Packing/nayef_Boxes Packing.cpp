#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int number_boxs;
    cin >> number_boxs;
    
    map<long long, int> m;
    int largest=0;
    for(int i=0; i<number_boxs; i++){
        long long tmp;
        cin >> tmp;
        m[tmp]++;
        largest = max(largest, m[tmp]);
    }
    //auto p = max_element(m.begin(), m.end());
    
    cout << largest << endl;
    
    
 
    return 0;
}
