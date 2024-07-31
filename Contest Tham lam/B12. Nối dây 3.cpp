#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int mod = 1e9 + 7;
int n; 
int a[199];
int res = 0;
priority_queue<int, vector<int>, greater<int>> pq;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    cin >> n;   
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        pq.push(a[i]);
    }
    while(pq.size())
    {
        int p = pq.top(); pq.pop();
        int q = pq.top(); pq.pop();
        int sum = p + q;
        res = (res + sum) % mod;
        if(!pq.size()) break;
        pq.push(sum);
    }
    cout << res;
}