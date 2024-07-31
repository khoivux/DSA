#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int mod = 1e9 + 7;

ll makeB(int n)
{
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoll(s);
}
ll pow(int a, int b)
{
    if(b == 0) return 1;
    ll x = pow(a, b / 2);
    if(b % 2)
        return ((x % mod) * (x % mod)) % mod * (a % mod) % mod;
    else 
        return ((x % mod) * (x % mod)) % mod;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a;
    cin >> a;
    int b = makeB(a);
    cout << pow(a, b);
}