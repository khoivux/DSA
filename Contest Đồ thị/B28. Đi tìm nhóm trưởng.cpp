#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1000];
vector<int> leader;
bool visited[1000];
int tmp;

void DFS(int u)
{
    if(adj[u].size() > adj[tmp].size()) tmp = u;
    else if(adj[u].size() == adj[tmp].size())
    {
        if(u < tmp) tmp = u;
    }

    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            DFS(v);
        }
    }
}

void tplt()
{
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            tmp = i;
            DFS(i);
            leader.push_back(tmp);
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
    tplt();
    sort(leader.begin(), leader.end());
    for(auto it : leader) cout << it << " " ;
}