// https://codeforces.com/group/SbXdq02gzF/contest/429341/problem/F
#include <iostream>
#include <deque> 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    deque<long long> q;
    
    while(t--){
        long long n;
        cin>>n;
        if(n == 1){
            long long x;
            cin>>x;
            q.push_back(x);
        }
         else if(n == 2){
            if(q.size() != 0){
            q.pop_front();
        }
         }
         else if(n == 3 && q.size() != 0){
             
             cout<<q.front()<<endl;
            
         
         }
         else
         cout<<"Empty!"<<endl;
    }
 
    return 0;
}
