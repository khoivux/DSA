#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, s;
vector<int> adj[10000];
bool visited[10000];
void BFS(int u)
{
    queue<int> q;
    visited[u] = true;
    q.push(u);

    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";
        for(auto v : adj[x])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
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
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());
    BFS(s);
}   