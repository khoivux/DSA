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
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if(n > 3)
        cout << max(
        {
            a[0] * a[1],
            a[n - 1] * a[n - 2],
            a[n - 1] * a[n - 2] * a[n - 3],
            a[0] * a[1] * a[n- 1]
        });    
    else
        cout << max(
        {
            a[0] * a[1],
            a[n - 1] * a[n - 2]
        });
}