#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[1999] = {6};
void start()
{
    for(int i = 1; i <= n; i++) a[i] = 6;
}
void result()
{
    for(int i = 1; i <= n; i ++) cout << a[i];
    cout << endl;
}
bool check()
{
    if(a[1] == 6 || a[n] == 8) return false;   
    int cnt6 = 0, cnt8 = 0;

    for(int i = 1; i <= n; i++)
    {
        if(a[i] == 8)
        {
            cnt8++;
            if(cnt8 == 2) return false;
            cnt6 = 0;
        }
        else if(a[i] == 6)
        {
            cnt6++;
            if(cnt6 > 3) return false;
            cnt8 = 0;
        } 
    }
    return true;
}
bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != 8) return false;
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
    
    cin >> n;
    start();
    while(!isFinal())
    {
        nextGen();
        if(check()) result();
    }

}