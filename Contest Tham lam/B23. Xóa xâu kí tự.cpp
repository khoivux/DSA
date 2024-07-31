#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    vector<int> v;
    string s; cin >> s;
    int cnt = 0;
    int res = 0;
    s += "0";
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0') 
        {
             v.push_back(cnt);
             cnt = 0;
        }
        else cnt++;
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i += 2)
    {
        res += v[i];
    }
    cout << res;
}