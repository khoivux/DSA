#include <bits/stdc++.h>
#define ll long long

using namespace std;
int S, d;
string s = "";
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> d >> S;
 
    int n = S;
    while(n-- && d > 9)
    {
        d -= 9;
        s += char(9 + '0');
    }
    if(d == 1)
    {
        while(n--) s = char(0 + '0') + s;
        s = char(1 + '0') + s;
    }
    else
    {
        n --;
        s = char(d - 1 + '0') + s;
        while(n--) s = char(0 + '0') + s;
        s = char(1 + '0') + s;
    }
    cout << s << endl << s.length();
}