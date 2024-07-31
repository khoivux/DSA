#include <bits/stdc++.h>
#define ll long long

using namespace std;
int F[19999][19999];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, b;
    cin >> n >> b;
    int v[n + 1], w[n + 1];
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> v[i];
    F[0][0] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(j - w[i] >= 0)
                F[i][j] = max(v[i] + F[i - 1][j - w[i]], F[i - 1][j]); 
                // lay hoac khong lay
            else 
                F[i][j] = F[i - 1][j];
        }
    }
    cout << F[n][b];
}