#include <bits/stdc++.h>
#define ll long long

using namespace std;

int k, n, m;
vector<int> adj[1001];
bool visited[1001];
int cnt[1001] = {0};

void DFS(int u)
{
    cnt[u]++;
    visited[u] = true;
    for(auto v : adj[u])
    {
        if(!visited[v])
        {
            DFS(v);
        }
    }
}

void BruteForce()
{
    for(int i = 0; i < k; i++)
    {
        memset(visited, false, sizeof(visited));
        if(!visited[a[i]])
        {
            DFS(a[i]);
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> k >> n >> m;
    int a[k];
    int res = 0;
    for(int i = 0; i < k; i++) cin >> a[i];
        
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    BruteForce();
    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] == k) 
        {
            res++;
        }
    }
    cout << res;
}