#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
vector<int> adj[100];
bool visited[100][100];

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

bool LienThong()
{
    DFS(1);
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i]) return false;
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
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    if(m != n - 1) cout << 0;
    else
    {
        if(LienThong()) cout << 1; 
        else cout << 0;
    }
}