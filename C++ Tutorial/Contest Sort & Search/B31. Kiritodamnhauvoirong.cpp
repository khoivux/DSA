#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, s; cin >> n >> s;
	vector<pair<ll, ll>> v;
	for(int i = 1; i <= n; i++)
	{
		ll x, y; cin >> x >> y;
		v.push_back({x, y});
	}

	sort(v.begin(), v.end());
	for(ll i = 0; i < n; i++)
	{
		if(s <= v[i].first)
		{
			cout << "NO";
			return 0;
		}
		else s += v[i].second;
	}
	cout << "YES";
}