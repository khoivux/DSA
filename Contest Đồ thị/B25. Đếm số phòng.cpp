#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m, cnt = 0;
char a[100][100];
int dx[4] = {1, - 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void DFS(int i, int j)
{
    a[i][j] = '#';
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && j1 >= 1 && i1 <= n && j1 <= m && a[i1][j1] == '.')
        {          
            DFS(i1, j1);
        }
    }
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
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == '.')
            {
                cnt++;
                DFS(i, j);
            }
        }
    }
    cout << cnt;
}