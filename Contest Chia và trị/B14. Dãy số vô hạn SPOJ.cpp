#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n;
const int mod = 1e9 + 7;

int result()
{
    if(n <= 2) return 1;
    int a = 1, b = 1, c;
    for(int i = 3; i <= n; i++)
    {
        c = ((a%mod) + (b%mod)) % mod;
        a = b; 
        b = c;
    }
    return c;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    cout << result();
}