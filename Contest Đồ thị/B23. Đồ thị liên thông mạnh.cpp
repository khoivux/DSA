#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
vector<int> adj[100];
bool visited[100];

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

bool check()
{
    for(int i = 1; i <= n; i++)
    {
        memset(visited, false, sizeof(visited));
        cnt = 0;
        DFS(i);
        if(cnt != n) return false;
    }
    return true;
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
    }
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    if(check()) cout << 1;
    else cout << 0;
}