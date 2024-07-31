#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1000];
vector<int> lienthong;
int cnt = 0;
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

void LT()
{
    for(int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
            lienthong.push_back(i);
            cnt++;
            DFS(i);
        }
    }
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
    LT();
    for(int i = 0; i < cnt - 1; i++)
    {
        cout << lienthong[i] << " " << lienthong[i + 1] << endl;
    }
}