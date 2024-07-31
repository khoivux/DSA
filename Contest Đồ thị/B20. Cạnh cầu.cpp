#include <bits/stdc++.h>
#define ll long long

using namespace std;


int n, m, cnt = 0;
vector<int> adj[1000];
vector<pair<int, int>> edge;
bool visited[1000];

void DFS(int u, int s, int t)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if((u == s && v == t) || (u == t && v == s))
            continue;
        if(!visited[v])
        {
            visited[v] = true;
            DFS(v, s, t);
        }
    }
}

int tplt(int s, int t)
{
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            res++;
            DFS(i, s, t);
        }
    }
    return res;
}

void CanhCau()
{
    int tmp = tplt(0, 0);
    for(auto e : edge)
    {
        int s = e.first, t = e.second; 
        memset(visited, false, sizeof(visited));
        if(tplt(s, t) > tmp) cnt++;
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
        edge.push_back({x, y});
    }
    for(int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());
    
    CanhCau();
}
