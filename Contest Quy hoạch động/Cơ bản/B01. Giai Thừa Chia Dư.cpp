#include <bits/stdc++.h>
#define ll long long

using namespace std;
const ll mod = 1e9 + 7;


main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll t; cin >> t;
	while(t--)
	{		
		ll n; cin >> n;	
		ll res = 1;
		for(ll i = 1; i <= n; i++)
		{
			res = (res * i % mod) % mod;
		}
		cout << res << endl;
	}
}