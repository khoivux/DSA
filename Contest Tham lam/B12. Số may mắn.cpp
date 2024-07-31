#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s = "";
int n;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    while(n % 4)
    {
        n -= 7;
        s += char(7 + '0');
    }
    int tmp = n / 4;
    while(tmp--)
    {
        s = char(4 + '0') + s;
    }
    cout << s;
}