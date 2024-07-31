#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m;
int ok = 0;
char a[199][199];
int used[199][199];
string s, tmp;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

void Try(int i, int j)
{
    if(ok) return;
    if(tmp == s)
    {
        ok = 1;
        return;
    }
    for(int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && !used[i1][j1])
        {
            tmp += a[i1][j1];
            used[i1][j1] = 1;
            if(tmp == s) ok = 1;
            else if(s.find(tmp) != string::npos) // Kiểm tra tmp có phải xâu con của 
            {
                Try(i1, j1);
            }
            tmp.pop_back();
            used[i1][j1] = 0;
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
    cin >> s;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == s[0])
            {
                memset(used, 0, sizeof(used));
                tmp = "";
                tmp += a[i][j];
                used[i][j];
                Try(i, j);
                if(ok)
                {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
}