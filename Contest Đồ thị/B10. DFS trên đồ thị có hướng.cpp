#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, s;
bool visited[1000];
vector<int> dsKe[1000];

void DFS(int u)
{
	cout << u << " ";
	visited[u] = true;
	for(auto v : dsKe[u])
	{
		if(!visited[v])
		{
			DFS(v);
		}
	}
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	memset(visited, false, sizeof(visited));

	cin >> n >> m >> s;
	for(int i = 1; i <= m; i++)
	{
		int x, y; cin >> x >> y;
		dsKe[x].push_back(y);
	}
	for(int i = 1; i <= n; i++)
	{
		sort(dsKe[i].begin(), dsKe[i].end());
	}
	DFS(s);
}