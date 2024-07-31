#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

string s;
stack<int> st;

int solve()
{
    int res = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(') st.push(i);
        else
        {
            if(st.empty())
            {
                res++;
                st.push(i);
            }
            else st.pop();
        }
    }
    res += (st.size()) / 2;
    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> s;
    cout << solve();
}