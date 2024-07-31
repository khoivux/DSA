#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct edge
{
    int sta, end, wei;
};
vector<edge> v;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] && i < j)
            {
                edge x;
                x.sta = i;
                x.end = j;
                x.wei = a[i][j];

                v.push_back(x);
            }
        }
    }
    for(auto it : v)
    {
        cout << it.sta << " " << it.end << " " << it.wei << endl;
    }
}