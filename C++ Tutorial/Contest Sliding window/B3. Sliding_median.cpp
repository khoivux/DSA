#include <bits/stdc++.h>
using namespace std;
main()
{
	string s; cin >> s;
	set <char> se;
	for(int i = 0; i < s.length(); i++) se.insert(s[i]);
	cout << se.size();
}