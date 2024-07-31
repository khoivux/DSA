#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll n;
int a[1000];
vector<string> v;
bool isFinal()
{
    for(ll i = 1; i <= n; i++)
    {
        if(!a[i]) return false;
    }
    return true;
}
void nextGen()
{
   int i = n;
   while(i >= 1 && a[i] == 1)
   {
        a[i] = 0;
        i--;
   }
   if(i) a[i] = 1;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        a[i] = 0;
        cout << 0;
    }
    cout << endl;
    if(n % 2 == 0)
    {
        n = n / 2;
        while(!isFinal())
        {
            nextGen();
            for(int i = 1; i <= n; i++)
                cout << a[i];
            
            for(int i = n; i >= 1; i--)
                cout << a[i];

            cout << endl;
        }
    } 
    else
    {
        n /= 2;
        while(!isFinal())
        {
            nextGen();
            for(int k = 0; k <= 1; k++)
            {
                for(int i = 1; i <= n; i++)
                    cout << a[i];
                cout << k;
                for(int i = n; i >= 1; i--)
                    cout << a[i];

                cout << endl;
            }
        }  
    }   
}