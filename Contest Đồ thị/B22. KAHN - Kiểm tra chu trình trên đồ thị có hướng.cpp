#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> adj[1000];
int bbv[1000] = {0};

void Kahn()
{
     queue<int> q;
     for(int i = 1; i <= n; i++)
     {
          if(bbv[i] == 0) q.push(i);
     }
     vector<int> topo;
     while(!q.empty())
     {
          int u = q.front(); q.pop();
          topo.push_back(u);
          for(int v : adj[u])
          {
               bbv[v]--;
               if(bbv[v] == 0) q.push(v);
          }
     }
     if(topo.size() != n) cout << 1;
     else cout << 0;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     cin >> n >> m;
     for(int i = 1; i <= m; i++)
     {
          int x, y; cin >> x >> y;
          adj[x].push_back(y);
          bbv[y]++;
     }
     Kahn();
}