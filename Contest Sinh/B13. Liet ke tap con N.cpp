#include <bits/stdc++.h>
#define ll long long
/*
Nhiệm vụ của bạn là liệt kê
tất cả các tập con khác rỗng của N theo thứ tự từ điển tăng dần.

*/
using namespace std;
int n;
int a[1999];
int x[1000];
vector<string> v;
void start()
{
    for(int i = 1; i <= n; i++) x[i] = i;
}
void solve()
{
    string tmp = "";
    for(int i = 1; i <= n; i++)
    {
        if(a[i])
        {
            tmp = tmp + char(x[i] + '0') + " ";
        }
    }
    v.push_back(tmp);
}
bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(!a[i]) return false;
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
    if(i) a[i] = 1;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    start();
    while(!isFinal())
    {
        nextGen();
        solve();
    }
    sort(v.begin(), v.end());
    for(auto it : v) cout << it << endl;
}