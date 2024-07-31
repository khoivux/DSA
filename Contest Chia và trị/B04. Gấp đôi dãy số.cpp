#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll a[51];
void make()
{
    a[1] = 1;
    for(int i = 2; i <= 50; i++)
    {
        a[i] = a[i - 1] * 2 + 1;
    }
}
int solve(int n, int k)
{
    if(k == a[n] / 2 + 1) return n;

    if(k > a[n] / 2 + 1) return solve(n - 1, k - (a[n] / 2 + 1));
    if(k < a[n] / 2 + 1) return solve(n - 1, k);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    make();
    int n, k; cin >> n >> k;
    cout << solve(n, k);
}