// https://codeforces.com/group/isP4JMZTix/contest/392597/problem/E
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
 
int main() {
 
	set<char> word;
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		s[i]=tolower(s[i]); // convert all characters to lowercase 
		word.insert(s[i]);
	}
	if(word.size()==26)
		cout<<"YES";
	else 
		cout<<"NO";
	
}
