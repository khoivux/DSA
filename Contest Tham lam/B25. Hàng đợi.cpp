#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0, res = 0;
    for(int i = 0; i < n; i++)
    {
        if(sum <= a[i])
        {
            res++;
            sum += a[i];
        }
    }
    cout << res;
}