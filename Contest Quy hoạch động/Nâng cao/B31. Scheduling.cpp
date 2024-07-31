#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct job
{
    int start, end;
    int profit;
};

bool cmp(job a, job b)
{
    return a.end < b.end;
}

int first_post(job a[], int i, int x)
{
    int l = 1, r = i - 1;
    int res = - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid].end <= x)
        {
            res = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return res;
}

int dp[10000];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    job a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].start >> a[i].end >> a[i].profit;
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        int id = first_post(a, i, a[i].start - 1);
        if(id == -1)
        {
            dp[i] = max(a[i].profit, dp[i - 1]);
        }
        else
        {
            dp[i] = max(a[i].profit + dp[id], dp[i - 1]);
        }
    }
    cout << dp[n];
}