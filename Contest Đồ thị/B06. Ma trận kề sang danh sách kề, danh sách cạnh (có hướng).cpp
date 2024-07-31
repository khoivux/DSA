#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> ke[1000];
vector<pair<int, int>> canh;
int arr[10000][10000];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j])
            {
                ke[i].push_back(j);
                canh.push_back({i, j});
            }
        }
    }

    for(auto it : canh)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    
    for(int i = 1; i <= n; i++)
    {
        sort(ke[i].begin(), ke[i].end());
        cout << i << " : ";
        for(auto it : ke[i])
            cout << it << " ";
        cout << endl;
    }
}