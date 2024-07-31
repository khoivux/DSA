#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	priority_queue<int> q;
	ll res = 0;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		q.push(x);
	}
	while(q.size() != 1)
	{
		int x = q.top(); q.pop();
		int y = q.top(); q.pop();

		res += x + y;
		q.push(x + y);
	}
	cout << res << endl;
}