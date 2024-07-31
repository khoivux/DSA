#include <bits/stdc++.h>
#define ll long long

using namespace std;


int floor(int a[], int n, int x)
{
    int l = 0, r = n - 1, res = -1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] <= x)
        {
            res = a[mid];
            l = mid + 1;
        }
        else r  = mid - 1;
    }
    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];   
    cout << floor(a, n, x);
}