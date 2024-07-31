#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int a[199];

bool binarySearch(int l, int r)
{
    if(l > r) return false;
    int mid = (l + r) / 2;
    if(a[mid] == k) return true;
    if(a[mid] < k) return binarySearch(mid + 1, r);
    else return binarySearch(l, mid - 1);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];

    if(binarySearch(0, n - 1)) cout << "Yes";
    else cout << "No";
}