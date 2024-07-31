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
	
	int n; cin >> n;
	int a[n], d[n+ 10];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		d[a[i]] = i;
	}
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		if(d[a[i] - 1] > i) res++;
	}
	cout << res;
}