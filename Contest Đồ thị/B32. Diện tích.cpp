#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
char a[1000][1000];
int dx[8] = {-1, 0, 0, 1};
int dy[8] = {0, -1, 1, 0};

int BFS(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = '#';

    int cnt = 0;
    while(!q.empty())
    {
        auto it = q.front(); q.pop();
        int i = it.first, j = it.second;
        
        cnt++;
        for(int k = 0; k < 4; k++)
        {
            int i1 = i + dx[k], j1 = j + dy[k];
            if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= n && a[i1][j1] == '.')
            {
                q.push({i1, j1});
                a[i1][j1] = '#';
            }
        }
    }
    return cnt;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == '.')
            cout << BFS(i, j) << endl;
        }
    }
}