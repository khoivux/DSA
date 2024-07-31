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
		int cnt = 0;
		queue<int> q;
		q.push(1);
		while(q.front() < n)
		{
			cnt++;
			int x = q.front();
			q.pop();
			q.push(x * 10);
			q.push(x * 10 + 1);
		}
		cout << cnt << endl;
	}
}