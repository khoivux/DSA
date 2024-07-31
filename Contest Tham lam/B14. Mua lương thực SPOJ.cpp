#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, s, m;
int res = 0;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> s >> m;
    int sum = s * m;
    for(int i = 1; i <= s; i++)
    {
        if(i % 7 == 0) continue;
        else
        {
            res++;
            if(res * n >= sum) break;
        }
    }
    cout << res;
}