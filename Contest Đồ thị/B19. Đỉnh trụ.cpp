#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
vector<int> adj[10000];
bool visited[10000];

void DFS(int u)
{
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

int tplt()
{
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            res++;
            DFS(i);
        }
    }
    return res;
}

void DinhTru()
{
    int tmp = tplt();
    for(int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        visited[i] = true;
        if(tplt() < tmp) cnt++;
    }
    cout << cnt;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    DinhTru();
}