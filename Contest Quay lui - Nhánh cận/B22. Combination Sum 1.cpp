#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
vector<vector<int>> v;
vector<int> tmp;
int used[10];
int sum = 0;
void Try(int i)
{
    for(int j = i; j <= 9; j++)
    {
        sum += j;
        tmp.push_back(j);
        if(sum == n && tmp.size() == k)
        {
            v.push_back(tmp);
        }
        else if(sum < n && tmp.size() < k)
            Try(j + 1);

        sum -= j;
        tmp.pop_back();
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    Try(1);
    for(int i = 0; i < v.size(); i++)
    {
        for(auto it : v[i])
            cout << it << " ";
        cout << endl;
    }
}