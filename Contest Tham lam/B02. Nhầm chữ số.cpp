#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll solve(ll a, char p, char q)
{
    string s = to_string(a);
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == p) s[i] = q;
    }
    return stoll(s);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    cout << solve(a, '5', '6') + solve(b, '5', '6') << endl;
    cout << solve(a, '6', '5') + solve(b, '6', '5');
}