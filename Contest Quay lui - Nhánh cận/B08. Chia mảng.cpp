#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int a[1999];
int x[1999];
int sum = 0;
int ok = 0;
int used[1999] = {0};

void Try(int i, int bd, int cur_sum, int cnt)
{
    if(cnt == k)
    {
        ok = 1; return;
    }
    for(int j = bd; j <= n; j++)
    {
        if(!used[j] && cur_sum + a[j] <= sum)
        {
            x[i] = a[j];
            used[j] = true;
            if(cur_sum + a[j] == sum)
            {
                Try(i + 1, 1, 0, cnt + 1);
            }
            else
            {
                Try(i + 1, j + 1, cur_sum + a[j], cnt);
            }
            used[j] = false;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sum /= k;
    Try(1, 1, 0, 1);
    cout << ok;
}