#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	vector<pair<int, int>> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back({x, 1});
		v.push_back({y, -1});
	}
	
	sort(v.begin(), v.end());
	int res = -1;
	int cnt = 0;
	for(auto it : v)
	{
		cnt += it.second;
		res = max(res, cnt);
	}
	cout << res;
}