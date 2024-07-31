#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool visited[10000];
vector<int> ke[10000];
int parent[10000];
int n, m, s, t;

void DFS(int u)
{
    visited[u] = true;

    for(auto v : ke[u])
    {
        if(!visited[v])
        {   
            parent[v] = u;
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

    cin >> n >> m;
    cin >> s >> t;

    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
    }
    DFS(s);
    if(visited[t])
    {
        vector<int> v;
        while(t != s)
        {
            v.push_back(t);
            t = parent[t];
        }
        v.push_back(t);
        reverse(v.begin(), v.end());
        for(auto x : v) cout << x << " ";
    }
    else cout << -1;
}