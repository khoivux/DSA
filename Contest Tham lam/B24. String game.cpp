#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
     
    int cnt[256] = {0};
    int cntOdd = 0;
    string s; cin >> s;
    for(char x : s) cnt[x]++;
    for(int i = 1; i < 256; i++)
    {
        if(cnt[i] % 2) cntOdd++;
    }
    if(cntOdd % 2) cout << 1;
    else cout << 2;
}