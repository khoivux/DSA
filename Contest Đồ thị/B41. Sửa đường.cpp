#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct edge
{
     int x, y, w;
};
int n, m;
int parent[1999], sz[1999];
vector<edge> Canh;
void Init()
{
     for(int i = 1; i <= n; i++)
     {
          parent[i] = i;
          sz[i] = 1;
     }
}

int Find(int u)
{
     if(u == parent[u]) return u;
     else return parent[u] = Find(parent[u]);
}

bool Union(int u, int v)
{
     u = Find(u);
     v = Find(v);
     if(u == v) return false;
     if(sz[u] > sz[v])
     {
          parent[v] = u;
          sz[u] += sz[v];
     }
     else 
     {
          parent[u] = v;
          sz[v] += sz[u];
     }
     return true;
}

void Input()
{
     cin >> n >> m;
     for(int i = 0; i < m; i++)
     {
          int x, y, z; cin >> x >> y >> z;
          Canh.push_back({x, y, z});
     }
}
void Kruskal()
{
     sort(Canh.begin(), Canh.end(), [](edge a, edge b)->bool{
          return a.w < b.w;
     });
     int d = 0;
     vector<edge> MST;
     for(int i = 0; i < m; i++)
     {
          if(MST.size() == n - 1) break;
          edge e = Canh[i];

          if(Union(e.x, e.y))
          {
               MST.push_back(e);
               d += e.w;
          }
     }
     cout << d << endl;
}
main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     Input();
     Init();
     Kruskal();
}