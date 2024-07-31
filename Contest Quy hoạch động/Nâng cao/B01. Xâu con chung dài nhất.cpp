#include <bits/stdc++.h>
#define ll long long

using namespace std;
int F[19999][19999] = {0};
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    
    int n = s1.length(), m = s2.length();
    s1 = '0' + s1;
    s2 = '0' + s2;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(s1[i] == s2[j]) 
                F[i][j] = F[i - 1][j - 1] + 1;
            else 
                F[i][j] = max(F[i - 1][j], F[i][j - 1]);
        }
    }

    cout << F[n][m];
}