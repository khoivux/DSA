#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m, cro[100] = {0}
vector<int> adj[22];
bool visited[1000];
int cnt = 0;
void DFS(int u, int sumCro)
{
	visited[u] = true;
	int ok = 0;
	for(int v : adj[u])
	{
		if(!visited[v])
		{	
			ok = 1;
			if(cro[v] == 1 && sumCro + 1 <= m)
			{
				DFS(v, cro[v] + sumCro);
			}
			else if(cro[v] == 0)
			{
				DFS(v, 0);
			}
		}
	}
	if(!ok) cnt++; // Kiem tra co phai leaf
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> cro[i];
	for(int i = 1; i < n; i++)
	{
		int x, y; cin >> x >> y;

	}
}