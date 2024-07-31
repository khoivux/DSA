#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int a[n], b[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n + 1; i++) cin >> b[i];
    int i = 0, j = 0;
    while(i < n && j < n)
    {
        if(a[i] == b[j])
        {
            i++; j++;
        }
        else
        {
            cout << i + 1;
            return 0;
        }
    }
}