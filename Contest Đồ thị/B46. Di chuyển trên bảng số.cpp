#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
#define pint pair<int, pair<int, int>>
using namespace std;

int n, m;
int a[1000][1000], d[1000][1000];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void Dijkstra()
{
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++) d[i][j] = 1e9;

    d[1][1] = a[1][1];
    priority_queue<pint, vector<pint>, greater<pint>> Q;
    Q.push({a[1][1], {1, 1}});

    while(!Q.empty())
    {
        auto it = Q.top(); Q.pop();
        int dist = it.first;
        int i = it.second.first, j = it.second.second;
        if(dist > d[i][j]) continue;

        for(int k = 0; k < 4; k++)
        {
            int i1 = i + dx[k], j1 = j + dy[k];
            if(d[i1][j1] > d[i][j] + a[i1][j1])
            {   
                d[i1][j1] = d[i][j] + a[i1][j1];
                Q.push({d[i1][j1], {i1, j1}});
            }
        } 
    }
    cout << d[6][7];
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    Dijkstra();
}