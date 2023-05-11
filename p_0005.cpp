// problem-link https://codeforces.com/group/SbXdq02gzF/contest/427087/problem/A

    #include<iostream>
    #include<bits/stdc++.h>
    #include<algorithm>
    #include<vector>
    using namespace std;

    int main(){
        int n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<q; i++){
            string x;
            cin >> x;
            if(x == "pop_back")
                v.pop_back();
            else if(x == "sort"){
                int n1, n2;
                cin >> n1 >> n2;
                sort(&v[n1-1],&v[n2]);
            }
            else if(x == "back")
                cout << v.back() << endl;
            else if(x == "reverse"){
                int n1, n2;
                cin >> n1 >> n2;
                reverse(&v[n1-1],&v[n2]);
            }
            else if(x == "front")
                cout << v.front() << endl;
            else if(x == "push_back"){
                int n;
                cin >> n;
                v.push_back(n);
            }
            else if(x == "print"){
                int n;
                cin >> n;
                cout << v[n-1] << endl;
            }
        }

        

        return 0;
    }
