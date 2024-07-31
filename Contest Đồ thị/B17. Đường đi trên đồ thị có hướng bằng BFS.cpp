#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, s, t;
int parent[10000];
bool visited[10000];
vector<int> adj[10000];
queue<int> q; 

void BFS(int u)
{
    visited[u] = true;
    q.push(u);
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(auto v : adj[x])
        {
            if(!visited[v])
            {
                q.push(v);
                parent[v] = x;
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

    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    BFS(s);
    if(visited[t])
    {
        vector<int> res;
        while(t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        reverse(res.begin(), res.end());
        for(auto it : res) cout << it << " ";
    }
    else cout << -1;
}