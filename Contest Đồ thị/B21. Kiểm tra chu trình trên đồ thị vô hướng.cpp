#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
vector<int> adj[100];
bool visited[100];
int parent[100];

bool checkDFS(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            visited[v] = true;
            parent[v] = u;
            if(checkDFS(v)) return true;
        }
        else if(v != parent[u])
            return true;
    }
    return false;
}

bool checkBFS(int u)
{
    queue <int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto y : adj[x])
        {
            if(!visited[y])
            {
                visited[y] = true;
                q.push(y);
                parent[y] = u;
            }
            else if(y != parent[u]) return true;
        }
    }
    return false;
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
    if(checkDFS(1)) cout << 1;
    else cout << 0;
}