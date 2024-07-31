#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool check(ll a[], ll n, ll L, ll h)
{
	ll cnt = 0;
	for(ll i = 0; i < n; i++)
	{
		if(a[i] > h)
		{
			cnt = cnt + a[i] - h;
		} 
		if(cnt >= L) return true;
	}
	return cnt >= L;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll n, L; cin >> n >> L;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ll res = 0;
	ll l = 0, r = (*max_element(a, a + n));
	while(l <= r)
	{
		//cout << l << " " << r << endl;
		ll mid = (l + r) / 2;
		if(check(a, n, L, mid))
		{
			res = mid;
			l = mid + 1;
		}
		else 
		{
			r = mid - 1;
		}
	}
	cout << res;
}