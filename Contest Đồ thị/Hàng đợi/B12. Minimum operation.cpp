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
		if(x.first < t && se.count(x.first * 2) == 0)
		{
			q.push({x.first * 2, x.second + 1});
			se.insert(x.first * 2);
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
		int s, t; cin >> s >> t;
		cout << bfs(s, t) << endl;
	}
}