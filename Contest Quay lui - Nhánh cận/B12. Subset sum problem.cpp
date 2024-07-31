#include <bits/stdc++.h>
#define ll long long
/*
Xác định xem có thể chia mảng A[] thành 2 tập
sao cho tổng của 2 tập bằng nhau hay không
*/
using namespace std;
int n;
int sum = 0;
int a[199];
int s = 0;
int ok = 0;

void Try(int i, int pos)
{
    for(int j = pos; j <= n; j++)
    {
        sum += a[j];
        if(sum == s) ok = 1;
        else Try(i + 1, j + 1);
        sum -= a[j];
    }
}

main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    
    if(s % 2) cout << 0;
    else
    {
        s /= 2;
        Try(1, 1);
        cout << ok;  
    }
}