#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int> adj[199];
int n;
int heigh[1000];
bool visited[1999];
void DFS(int u)
{
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            heigh[v] = heigh[u] + 1;
            DFS(v);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> n;
    for(int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    heigh[1] = 0;
    DFS(1);
    for(int i = 1; i <= n; i++) cout << heigh[i] << " ";
}