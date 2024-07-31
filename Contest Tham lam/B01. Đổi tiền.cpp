#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int cost[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n; cin >> n;
    int cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        if(n == 0) break;
        else if(n >= cost[i])
        {
            int tmp = n / cost[i];
            n -= tmp * cost[i];
            cnt += tmp;
        }
    }
    cout << cnt;
}