#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s;
int cnt[256] = {0};
int cntMax = -1;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> s;
    for(char c : s)
    {
        cnt[c]++;
        cntMax = max(cntMax, cnt[c]);
    }
    int tmp = s.length() - cntMax + 1;
    if(cntMax <= tmp) cout << "YES";
    else cout << "NO";
}