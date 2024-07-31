#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int> even;
vector<int> odd;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 2) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }
    if(even.size() % 2 == 0)
    {
         cout << "YES";
         return 0;
    }
    else
    {
        for(auto it1 : even)
        {
            for(auto it2 : odd)
            {
                if(abs(it1 - it2) == 1)
                {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}