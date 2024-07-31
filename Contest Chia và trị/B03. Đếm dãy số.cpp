#include <bits/stdc++.h>
#define ll long long
/*
Toan roi rac
n = 6
pow(2, 5) = 5C0 + 5C1 +... + 5C5 
*/
using namespace std;
const int mod = 1e9 + 7;
ll pow(int a, int b)
{
    if(b == 0) return 1;
    ll x = pow(a, b / 2);
    if(b % 2)
        return (x % mod) * (x % mod) % mod * (a % mod) % mod;
    else return (x % mod) * (x % mod) % mod;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    cout << pow(2, n - 1);
}