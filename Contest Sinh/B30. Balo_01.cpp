#include <bits/stdc++.h>
#define ll long long
/*
nhiệm vụ của bạn là hãy giúp tên trộm lựa chọn các đồ vật sao cho tổng trọng
lượng của chúng không vượt quá S và có giá trị lớn nhất
*/
using namespace std;

int a[1999];
int x[1999];
int y[1999];
int n, s, value = -1e9;
bool checkSum()
{
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i]) sum += x[i];
    }
    return sum <= s;
}
ll Value()
{
    ll res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i]) res += y[i];
    }
    return res;
}
void solve()
{
    ll tmp = Value();
    if(checkSum() && tmp > value)
    {
        value = tmp;
    }
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if(i == n) solve();
        else Try(i + 1);
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> s;
    for(int i = 1; i <= n; i++) cin >> x[i];
    for(int i = 1; i <= n; i++) cin >> y[i];        
    Try(1);
    cout << value;
}