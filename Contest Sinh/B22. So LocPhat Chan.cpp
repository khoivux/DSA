#include <bits/stdc++.h>
#define ll long long
// N số lộc phát chẵn đối xứng đầu tiên
using namespace std;
ll n;
int a[1000];
int cnt = 0;
int N;
bool isFinal()
{
    for(ll i = 1; i <= n; i++)
    {
        if(a[i] == 6) return false;
    }
    return true;
}
void nextGen()
{
   int i = n;
   while(i >= 1 && a[i] == 8)
   {
        a[i] = 6;
        i--;
   }
   if(i) a[i] = 8;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    n = 1;
    while(cnt < N)
    {
        for(int i = 1; i <= 2 * n; i++)
        {
            a[i] = 6;
            cout << a[i];
        }
        cnt++;

        cout << endl;
        while(!isFinal() && cnt < N)
        {
            nextGen();
            for(int i = 1; i <= n; i++)
                cout << a[i];
                
            for(int i = n; i >= 1; i--)
                cout << a[i];
            cnt++;
            cout << endl;
        }
        n++;
    }
}