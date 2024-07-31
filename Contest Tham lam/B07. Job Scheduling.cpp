#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int res = 0;
vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), cmp);

    int preEnd = 0;
    for(auto it : v)
    {
        if(it.first > preEnd)
        {
            res++;
            preEnd = it.second;
        }
    }
    cout << res;
}