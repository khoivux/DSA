#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int bfs(int s, int t)
{
	queue<ii> q;
	q.push({s, 0});
	set<int> se;
	se.insert(s);
	while(!q.empty())
	{
		ii x = q.front();
		q.pop();
		if(x.first == t) return x.second;

		if(x.first > 1 && se.count(x.first - 1) == 0)
		{
			q.push({x.first - 1, x.second + 1});
			se.insert(x.first - 1);
		}
		int n = x.first;
		for(int i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				int u = i, v = n / i;
				int tmp = max(u, v);
				if(se.count(tmp) == 0)
				{
					q.push({tmp, x.second + 1});
					se.insert(tmp);
				}
			}
		}
	}
	return -1;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int s; cin >> s;
		cout << bfs(s, 1) << endl;
	}
}