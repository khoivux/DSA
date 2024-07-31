#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s;
int solve()
{
    int res = 0;
    stack <char> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
            st.push(s[i]);
        else
        {
            if(st.empty()) res++;
            else
            {
                char tmp = st.top();
                st.pop();
                if(tmp != '(') res++;
            }
        }
    }
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