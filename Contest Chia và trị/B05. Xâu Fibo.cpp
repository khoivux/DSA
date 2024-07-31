#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll f[93];
void makeFibo()
{
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= 92; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}
char solve(int k, int n)
{
    if(n == 1) return 'A';
    if(n == 2) return 'B';

    if(k > f[n - 2]) 
        return solve(k - f[n - 2], n - 1);
    else 
        return solve(k, n - 2);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    makeFibo();
    cout << solve(k, n);
}