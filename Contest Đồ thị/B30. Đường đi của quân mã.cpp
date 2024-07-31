#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int s, t, u, v;
int a[1000][1000];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int BFS()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{s, t}, 0});
    a[s][t] = 0;

    while(!q.empty())
    {
        auto it = q.front(); q.pop();
        int i = it.first.first, j = it.first.second, dist = it.second;
        
        if(i == u && j == v) return dist;

        for(int k = 0; k < 8; k++)
        {
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && a[i1][j1])
            {
                q.push({{i1, j1}, dist + 1});
                a[i1][j1] = 0;
            }
        }
    }
    return -1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    cin >> s >> t >> u >> v;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << BFS();
}