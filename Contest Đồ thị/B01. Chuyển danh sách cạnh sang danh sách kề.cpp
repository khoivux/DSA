#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> ke[1000];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        cout << i << " : ";
        for(int x : ke[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}