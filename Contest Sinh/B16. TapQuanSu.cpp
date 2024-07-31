#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int a[1999];
int b[1000];
bool isFinal()
{
    for(int i = 1; i <= k; i++)
    {
        if(a[i] != n - k + i) return false;
    }
    return true;
}
int result()
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != b[i]) cnt++;
    }
    return cnt;
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
        a[i]++;
        for(int j = i + 1; j <= k; j++)
            a[j] = a[j - 1];
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    for(int i = 1; i <= k; i++) 
    {
        cin >> a[i];
        b[i] = a[i];
    }
    if(isFinal()) cout << k;
    else
    {
       nextGen();
       cout << result(); 
    }

}