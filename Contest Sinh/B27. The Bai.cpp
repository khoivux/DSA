#include <bits/stdc++.h>
#define ll long long
/*
Không có 2 thẻ nào ghi hai số
trùng nhau.
*/
using namespace std;
int a[19999];
int n;
int used[1999] = {0};
void result()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

void solve()
{
    int check = 1;
    for(int i = 1; i <= n - 1; i++)
    {
        if(abs(a[i + 1] - a[i]) == 1) check = 0;
    }
    if(check) result();
}

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(!used[j])
        {
            used[j] = 1;
            a[i] = j;
            if(i == n) solve();
            else Try(i + 1);

            used[j] = 0;
        }
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    Try(1);
}