#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int n, m, st;
vector<ii> adj[199];

void Input()
{
     cin >> n >> m >> st;
     for(int i = 0; i < m; i++)
     {
          int x, y, z; cin >> x >> y >> z;
          adj[x].push_back({y, z});
          adj[y].push_back({x, z});
     }
}

void Dijkstra(int s)
{
     vector<int> d(n + 1, 1e9);
     // Độ dài đường đi ngắn nhất tới 1 đỉnh
     d[s] = 0;
     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
     Q.push({0, s});
     while(!Q.empty())
     {
          pair<int, int> top = Q.top();
          Q.pop();
          int u = top.second, dist = top.first;
          if(dist > d[u]) continue;
          // relax
          for(auto it : adj[u])
          {
               int v = it.first, w = it.second;
               if(d[v] > d[u] + w)
               {
                    d[v] = d[u] + w;
                    Q.push({d[v], v});
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
     
     Input();
     Dijkstra(st);
}