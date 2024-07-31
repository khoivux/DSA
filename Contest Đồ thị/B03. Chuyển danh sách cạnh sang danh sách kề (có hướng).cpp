#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, m;
vector<int> ke[1000];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; 
        cin >> x >> y;
        ke[x].push_back(y);
    }
    
    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        cout << i << " : ";
        for(auto it : ke[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}