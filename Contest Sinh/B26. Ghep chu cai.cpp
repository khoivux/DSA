#include <bits/stdc++.h>
#define ll long long
/*
Người ta muốn ghép các chữ cái bắt đầu từ chữ cái ‘A’ cho đến
chữ cái c (‘D’ <= c <= ‘H’) sao cho mỗi chữ cái được sử dụng đúng một lần và
xâu kết quả không có nguyên âm nào bị kẹp giữa bởi hai phụ âm.
*/
using namespace std;
char a[19999];
char c;
int n;
int used[1999] = {0};
void result()
{
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}
bool nguyen_am(char c)
{
    return (c == 'A' || c == 'E');
}
void solve()
{
    int check = 1;
    for(int i = 2; i <= n - 1; i++)
    {
        if(nguyen_am(a[i]))
        {
            if(!nguyen_am(a[i + 1]) && !nguyen_am(a[i - 1])) check = 0;
        }
    }
    if(check) result();
}

void Try(int i)
{
    for(int j = 'A'; j <= c; j++)
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
    cin >> c;
    n = c - 'A' + 1;
    Try(1);
}