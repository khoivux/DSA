#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
vector<int> adj[100001];
bool visited[10000];

void DFS(int u)
{
    cnt++;
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            visited[v] = true;
            DFS(v);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int tmp = tplt();
    for(int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        cnt = 0;
        visited[i] = true;
        if(i == 1) DFS(2);
        else DFS(1);
        if(cnt != n - 1) res++;
    }
    cout << cnt;
}