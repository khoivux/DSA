#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1000] = {0};
int n, k;
vector<vector<int>> v1;
vector<vector<int>> v2;

void result(vector<vector<int>> v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(auto it : v[i])
        {
            cout << it;
        }
        cout << " ";
    }
    cout << endl;
}
void solve()
{
    int cnt = 0;
    int dem = 0;
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        cnt += a[i];
        if(a[i]) dem += a[i];
        else dem = 0;
        res = max(dem, res);
    }
    if(cnt == k)
    {
        vector<int> tmp;
        for(int i = 1; i <= n; i++)
        {
            tmp.push_back(a[i]);
        }

        v1.push_back(tmp);
        if(res == k) v2.push_back(tmp);
    }
}

bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != 1) return false;
    }
    return true;
}

void nextGen()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }

    if(i >  0) a[i] = 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> k;
    while(!isFinal())
    {
        nextGen();
        solve();
    }
    result(v1);
    result(v2);
}
