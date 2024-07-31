#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        int n, m;
        vector<int> adj[100001];
        cin >> n >> m;
        for(int i = 1; i <= m; i++)
        for(int i = 1; i <= m; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int ok = 1;
        for(int i = 1; i <= n; i++)
        {
            for(auto it : adj[i])
            {
                if(adj[i].size() != adj[it].size())
                {
                    ok = 0;
                    break;
                }
            }
            if(ok == 0) break;
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}