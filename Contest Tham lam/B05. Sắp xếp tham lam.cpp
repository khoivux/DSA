#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int a[199], b[199];

bool check()
{
    for(int i = 1; i <= n; i++)
    {
        if(b[i] != a[i] && b[i] != a[n - i + 1]) return false;
    }
    return true;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    if(check()) cout << 1;
    else cout << 0;
}