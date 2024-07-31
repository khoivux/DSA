#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s;
int k;
int cnt[256] = {0};
priority_queue<int> pq;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> k;
    cin >> s;

    for(char c : s) cnt[c]++;

    for(int i = 1; i < 256; i++)
    {
        if(cnt[i]) pq.push(cnt[i]);
    }
    
    while(k-- && pq.size())
    {
        int tmp = pq.top();
        pq.pop();
        if(tmp - 1 >= 1) pq.push(tmp - 1);
    }
    int res = 0;
    while(!pq.empty())
    {
        int tmp = pq.top(); 
        pq.pop();
        res += tmp * tmp;
    }
    cout << res;
}