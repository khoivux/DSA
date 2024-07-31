#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll crossingSum(int a[], int l, int r, int mid)
{
    ll sumLeft = 0, maxSumLeft = 0;
    ll sumRight = 0, maxSumRight = 0;
    for(int i = mid; i >= l; i--)
    {
        sumLeft += a[i];
        maxSumLeft = max(maxSumLeft, sumLeft);
    }
    for(int i = mid + 1; i <= r; i++)
    {
        sumRight += a[i];
        maxSumRight = max(maxSumRight, sumRight);
    }
    return maxSumRight + maxSumLeft;
}
ll maxSum(int a[], int l, int r)
{
    if(l ==  r) return a[l];
    int mid = (l + r) / 2;
    return max({
        maxSum(a, mid + 1, r),
        maxSum(a, l , mid),
        crossingSum(a, l, r, mid)
    });
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << maxSum(a, 0, n - 1);
}