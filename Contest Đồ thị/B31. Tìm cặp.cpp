#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, res = 0, cnt = 1;
vector<int> adj[1999];
bool visited[199];

void DFS(int u)
{    
     visited[u] = true;
     for(int v : adj[u])
     {
          if(!visited[v])
          {
               cnt++;
               res += cnt - 1;
               DFS(v);
               cnt--;
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
     DFS(1);
     cout << res + n << endl;
}