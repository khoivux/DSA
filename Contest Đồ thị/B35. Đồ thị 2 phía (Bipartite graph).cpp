#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int> adj[199];
int n, m;
int ok;
int color[1999];

void DFS(int u)
{
    for(auto v : adj[u])
    {
        if(color[v] == 0)
        {
            color[v] = 3 - color[u];
            DFS(v);
        }
        else if(color[v] == color[u])
        {
            ok = 0;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t; 
    while(t--)
    {
        memset(color, 0, sizeof(color));
        ok = 1;
        cin >> n >> m;
        for(int i = 1; i <= n; i++) adj[i].clear();
        for(int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            if(!color[i])
            {
                color[i] = 1;
                DFS(i);
            }
        }

        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}   