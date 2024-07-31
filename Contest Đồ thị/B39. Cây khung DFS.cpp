#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m, s;
vector<int> adj[191];
bool visited[199];

void DFS(int u)
{
     visited[u] = true;
     for(auto v : adj[u])
     {
          if(!visited[v])
          {
               cout << u << " -> " << v << endl;
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

     cin >> n >> m >> s;
     for(int i = 0; i < m; i++)
     {
          int x, y;
          cin >> x >> y;
          adj[x].push_back(y);
          adj[y].push_back(x);
     }
     for(int i = 1; i <= n; i++)
     {
          sort(adj[i].begin(), adj[i].end());
     }
     DFS(s);
}