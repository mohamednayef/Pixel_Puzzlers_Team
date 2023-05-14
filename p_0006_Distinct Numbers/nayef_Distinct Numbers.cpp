#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int size, d=1;
    cin >> size;
    long long arr[size];

    for(int i=0; i<size; i++)
        cin >> arr[i];
    
    sort(arr, arr+size);

    for(int i=1; i<size; i++){
        if(arr[i] != arr[i-1])
            d += 1;
    }
    cout << d;



    return 0;
}

