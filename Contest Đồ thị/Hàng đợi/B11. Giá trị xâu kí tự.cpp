#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll t; cin >> t;
	while(t--)
	{
		ll k, res = 0;
		string s;
		cin >> k >> s;
		map<char, ll> mp;
		priority_queue<ll> q;

		for(ll i = 0; i < s.length(); i++) 
			mp[s[i]]++;

		for(auto it : mp)
		{
			if(it.second > 0) q.push(it.second);
		}
		while(k-- && !q.empty())
		{
			ll x = q.top(); q.pop();
			if(u - 1 > 0)
			{
				x--;
				q.push(x);
			}
		}
		while(!q.empty())
		{
			res += q.top() * q.top();
			q.pop();
		}
		cout << res << endl;
	}
}