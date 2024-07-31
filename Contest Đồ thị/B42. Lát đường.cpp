#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
int parent[100];
int sz[1000];
int res = -1;

int Find(int u)
{
     if(u == parent[u]) return u;
     return parent[u] = Find(parent[u]);
}

bool Union(int x, int y)
{
     x = Find(x);
     y = Find(y);
     if(x == y) return false;
     else if(sz[x] > sz[y])
     {
          parent[y] = x;
          sz[x] += sz[y];
     }
     else
     {
          parent[x] = y;
          sz[y] += sz[x];
     }

     res = max({res, sz[x], sz[y]});
     return true;
}

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);

     cin >> n >> m;
     int cnt = n;
     for(int i = 1; i <= n; i++)
     {
          parent[i] = i;
          sz[i] = 1;
     }
     for(int i = 1; i <= m; i++)
     {
          int x, y; 
          cin >> x >> y;
          if(Union(x, y)) cnt--;
          cout << cnt << " " << res << endl;
     }
}