#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m;
int dist[10000][10000];

void Floyd()
{
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) dist[i][j] = 1e9;
    }
    for(int i  = 0; i < m; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        dist[x][y] = z;
        dist[y][x] = z;
    }
    Floyd();
    int q; cin >> q;
    while(q--)
    {
        int x, y; cin >> x >> y;
        cout << dist[x][y] << endl;
    }
}