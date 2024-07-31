#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int n, m, s;
vector<ii> adj[1000];
int d[1000];

void Init()
{
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        adj[x].push_back({z, y});
        adj[y].push_back({z, x});
    }
}
/*
    - Chạy n - 1 vòng
    - Mỗi vòng sẽ xét tất cả các cạnh
    - e(u, v): d[v] = min(d[v], d[u] + w); 
*/
void BellmanFord(int s)
{
    fill(d + 1, d + n + 1, 1e9);
    d[s] = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        for(int u = 1; u <= n; u++)
        {
            for(auto it : adj[u])
            {
                int v = it.second, w = it.first;
                d[v] = min(d[v], d[u] + w);
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << d[i] << " ";
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    Init();
    BellmanFord(s);
}