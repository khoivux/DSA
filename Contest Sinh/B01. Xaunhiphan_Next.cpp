#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s;
bool check()
{
	for(auto i : s)
	{
		if(i == '0') return false;
	}
	return true;
}
void nextGen()
{
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i >= 0) s[i] = '1';
	cout << s;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> s;
	nextGen();
}