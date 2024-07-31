#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n; 
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first == b.first) return a.second < b.second;
	else return a.first < b.first;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n; cin.ignore();
	for(int i = 1; i <= n; i++)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		int x;
		while(ss >> x)
		{
			v.push_back({i, x});
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(auto it : v)
	{
		cout << it.first << " " << it.second << endl;
	}
}