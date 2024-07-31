#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[1999];
string s;
vector<string> v;
void start()
{
    for(int i = 1; i <= n; i++) a[i] = i;
}
void solve()
{   
    string tmp = "";
    for(int i = 1; i <= n; i ++) 
    {
        tmp = tmp + s[a[i] - 1];
    }
    v.push_back(tmp);
}

bool isFinal()
{
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i + 1]) return false;
    }
    return true;
}
void nextGen()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    if(i)
    {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l <= r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    

    cin >> s;
    n = s.length();
    v.push_back(s);
    start();
    while(!isFinal())
    {
        nextGen();
        solve();
    }
    sort(v.begin(), v.end());
    for(auto it : v) cout << it << endl;
}