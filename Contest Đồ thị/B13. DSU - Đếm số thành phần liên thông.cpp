#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
bool visited[1000];
int parent[1000];
int sz[1000];

int Find(int u)
{
    while(u != parent[u])
    {
        u = parent[u];
    }
    return u;
}
void Union(int u, int v)
{
    int pu = parent[u];
    int pv = parent[v];

    if(pu == pv) return;
    if(pu < pv) parent[v] = pu;
    else parent[u] = pv;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    memset(visited, false, sizeof(visited));

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
    int cnt = 0;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        Union(x, y);
    }
    for(int i = 1; i <= n; i++) 
    {
        if(i == parent[i]) cnt++;
    }
    cout << cnt; 
}