#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, parent[1000], bac[1000];

int Find(int u)
{
    if(u == parent[u]) return u;
    return parent[u] = Find(parent[u]);
}

void Union(int u, int v)
{
    int pu = parent[u];
    int pv = parent[v];

    if(pu == pv) return;
    else
    {
        if(bac[pu] > bac[pv] || bac[pu] == bac[pv] && x < y)
        {
            parent[pv] = pu;
        }
        else 
        {
            parent[pu] = pv;
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i = 1; i<= n; i++) parent[i] = i;

    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        Union(x, y);
        bac[x]++; bac[y]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(i == parent[i]) cout << i << endl;
    }
}