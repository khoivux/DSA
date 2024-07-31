#include <bits/stdc++.h>
#define ll long long

using namespace std;
int k, n;
string s;
string res = "";
void Try(int i, string cur_str, int cnt)
{
    if(cnt > k || i > n) return;
    res = max (res, cur_str);
    char max_val = cur_str[i];
    for(int j = i + 1; j <= n; j++)
    {
        max_val = max(max_val, cur_str[j]);
    }
    if(max_val == cur_str[i]) Try(i + 1, cur_str, cnt);
    else
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(cur_str[j] == max_val)
            {
                string tmp = cur_str;
                swap(tmp[i], tmp[j]);
                Try(i + 1, tmp, cnt + 1);
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> k >> s;
    cout << s << endl;
    n = s.length();
    s = "0" + s;
    res = s;
    Try(1, s, 0);
    cout << res.substr(1);
}