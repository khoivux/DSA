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
	
	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int tmp = 0;
	int cnt = 0;
	int l = 0, r = 0;
	for(int r = 0; r < n; r++)
	{
		tmp += a[r];
		while(tmp > k)
		{
				tmp -= a[l];
				l++;
		}
		if(tmp == k) cnt++;
	}
	cout << cnt;
}