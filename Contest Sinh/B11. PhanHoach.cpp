#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
int a[1000];
int cnt;

void result()
{
    for(int i = 1; i <= cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool isFinal()
{
    for(int i = 1; i <= cnt; i++)
    {
        if(a[i] != 1) return false;
    }
    return true;
}

void nextGen()
{
    int i = cnt;
    while(i >= 1 && a[i] == 1)
    {
        i--;
    }

    if(i >= 1)
    {
        a[i]--;
        int duw = cnt - i + 1;
        cnt = i;

        int q = duw / a[i];
        int r = duw % a[i];
        if(q)
        {
            for(int j = 1; j <= q; j++)
            {
                a[++cnt] = a[i];
            }
        }
        if(r) a[++cnt] = r;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    a[1] = n;
    cnt = 1;
    cout << a[1] << endl;
    while(!isFinal())
    {
        nextGen();
        result();
    }
    return 0;
}
