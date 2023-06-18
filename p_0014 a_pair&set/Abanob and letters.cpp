// https://codeforces.com/group/SbXdq02gzF/contest/427982/problem/F
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {

	set<char> word;

	string c;
	getline(cin, c);
 // {a, b, c}
	
	for (int i = 0; i < c.length() ; i++) {
		if (c[i] >= 'a' && c[i] <= 'z') 
		
			word.insert(c[i]);
	}
	
	cout << word.size();

	return 0;
}
