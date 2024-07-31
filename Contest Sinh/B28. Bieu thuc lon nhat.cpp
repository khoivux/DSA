#include <bits/stdc++.h>
#define ll long long
/*
Nhiệm vụ của bạn là tìm giá trị lớn nhất của biểu thức
X o1 Y o2 Z o3 T, trong đó o1, o2, o3 có thể là các dấu +, -.

*/
using namespace std;
int a[1999];
int x[1999];
int res = -1e9;
void solve()
{
    int sum = x[1];
    for(int i = 2; i <= 4; i++)
    {
        if(a[i - 1]) sum += x[i];
        else sum -= x[i];
    }
    res = max(res, sum);
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == 3) solve();
        else Try(i + 1);
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for(int i = 1; i <= 4; i++) cin >> x[i];
    Try(1);
    cout << res;
}