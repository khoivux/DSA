#include <bits/stdc++.h>
#define ll long long
// Số lớn nhất ngay sau 
using namespace std;
ll n, k;
string a;
bool isFinal()
{
    for(ll i = 0; i < n - 1; i++)
    {
        if(a[i] < a[i + 1]) return false;
    }
    return true;
}

void nextGen()
{
    ll i = n - 2;
    while(i >= 0 && a[i] >= a[i + 1])
    {
        i--;
    }
    if(i >= 0)
    {
        ll j = n - 1;
        while(a[j] <= a[i]) j--;
        swap(a[j], a[i]);
        ll l = i + 1, r = n - 1;
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
    
    cin >> a;
    n = a.length();
    if(isFinal()) cout << "NOT EXIST";
    else
    {
        nextGen();
        cout << a;
    }
}