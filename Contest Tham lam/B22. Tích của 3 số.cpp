#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            cnt1++;
            while(n % i == 0)
            {
                cnt2++;
                n /= i;
            }
        }
    }
    if(n != 1)
    {
        cnt1++;
        cnt2++;
    }
    if(cnt1 >= 3) cout << 1;
    else if(cnt1 == 2 && cnt2 >= 4) cout << 1;
    else if(cnt1 == 1 && cnt2 >= 6) cout << 1;
    else cout << 0;
}