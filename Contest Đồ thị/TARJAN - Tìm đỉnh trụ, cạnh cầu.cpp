 #include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, time = 0;
vector<int> adj[1000];
bool visited[1000], AP[1005];
int disc[10000], low[1000];
// low[v] >= disc[u] -> u là trụ

void DFS(int u, int par)
{
     visited[u] = true;
     disc[u] = low[u] = ++time;
     int child = 0; // Đỉnh con

     for(int v : adj[u])
     {
          if(v == par) continue; // Đỉnh cha
          if(!visited[u])
          {
               DFS(v, u);
               child++; 
               low[u] = min(low[u], low[v]);
               if(par != 1 && disc[u] <= low[v])
               {
                    AP[u] = true;
                    // Nếu u không phải đỉnh nguồn và disc[u] <= low[v]
                    // u là đỉnh trụ
               }
          }
          else 
          {
               low[u] = min(low[u], disc[v]);
          }
     }
     if(par == -1 && child > 1) AP[u] = true;
     // Nếu u là đỉnh nguồn và có nhiều hơn 1 đỉnh con
     // u là đỉnh trụ
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     memset(visited, false, sizeof(visited));
     memset(AP, false, sizeof(AP));
     
     cin >> n >> m;
     for(int i = 1; i <= m; i++)
     {
          int x, y; cin >> x >> y;
          adj[x].push_back(y);
          adj[y].push_back(x);
     } 
     for(int i = 1; i <= n; i++)
     {
          if(!visited[i]) DFS(i, -1);
     }
     for(int i = 1; i <= n; i++)
     {
          if(AP[i]) cout << i << " ";
     }
}