#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool check(ll n, ll x, ll y, ll mid)
{
	ll cnt = mid / x + mid / y;
	return cnt >= n;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll n, x, y; cin >> n >> x >> y;
	if(x > y) swap(x, y);
	ll res = 0;
	ll l = 0, r = n * x;
	while(l <= r)
	{
		ll mid = (l + r) / 2;
		if(check(n - 1, x, y, mid))
		{
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << res + x;
}