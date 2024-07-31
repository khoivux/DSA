#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.second < b.second;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	vector<pair<int, int>> v;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y; cin >> x >> y;
		v.push_back({x, y});
	}

	sort(v.begin(), v.end(), cmp);
	int res = 1;
	int tmp = v[0].second;
	for(int i = 1; i < n; i++)
	{
		if(v[i].first >= tmp) 
		{
			res++;
			tmp = v[i].second;
		}
	}
	cout << res;
}