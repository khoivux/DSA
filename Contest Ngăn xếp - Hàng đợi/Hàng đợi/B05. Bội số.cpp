#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<ll> q;
		q.push(8);
		int ok = 0;
		while(!ok)
		{
			ll x = q.front(); q.pop();
			if(x % n == 0)
			{
				ok = 1;
				cout << x << endl;
				continue;
			}
			q.push(x * 10);
			q.push(x * 10 + 8);
		}
	}
}