#include <bits/stdc++.h>
#define ll long long
//Hãy liệt kê các hoán vị của các phần tử khác nhau 
//trong mảng theo thứ tự ngược.
using namespace std;
int n;
int cnt = 1;
int d[1000];
int x[1000];
int a[1000];
vector<vector<int>> v;
void start()
{
    for(int i = 1; i <= cnt; i++) a[i] = i;
}
bool isFinal()
{
    for(int i = 1; i < cnt; i++)
    {
        if(a[i] < a[i + 1]) return false;
    }
    return true;
}
void result()
{
    vector<int> tmp;
    for(int i = 1; i <= cnt; i++) 
    {
        tmp.push_back(x[a[i]]);
    }
    v.push_back(tmp);
}
void nextGen()
{
    int i = n - 1;
    while(i >= 1 && a[i] > a[i + 1])
    {
        i--;
    }
    int j = cnt;
    while(a[j] < a[i]) j--;
    swap(a[i], a[j]);
    int l = i + 1, r = cnt;
    while(l <= r)
    {
        swap(a[l], a[r]);
        l++; r--;
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int t; cin >> t;
        d[t]++;
        if(d[t] == 1) x[cnt++] = t;
    }
    cnt--;
    start();
    while(!isFinal())
    {
        result();
        nextGen();
    }
    result();

    for(int i = v.size() - 1; i >= 0; i--)
    {
        for(auto it : v[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}