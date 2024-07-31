#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int mod = 1e9 + 7;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		queue<ll> q;
		int n; cin >> n;
		q.push(1);
		while(true)
		{
			ll x = q.front(); q.pop();
			if(x % n == 0)
			{
				cout << x << endl;
				break;
			}
			q.push(x * 10);
			q.push(x * 10 + 1);
		}
	}
}