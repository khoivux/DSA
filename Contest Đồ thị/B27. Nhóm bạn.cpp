#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1000];
bool visited[1000];
int res = 0;
int cnt = 0;

void DFS(int u)
{
    cnt++;
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            DFS(v);
        }
    }
}
int tplt()
{
    int res = -1;
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            cnt = 0;
            DFS(i);
        }
        res = max(res, cnt);
    }
    return res;
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
    cout << tplt();
}