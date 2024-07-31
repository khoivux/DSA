#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
string s;
int k;
void solve()
{
    stack<pair<char, int>> st;
    for(int i = 0; i < s.length(); i++)
    {
        if(st.empty())
        {
            st.push({s[i], 1});
            continue;
        }
        auto it = st.top();
        if(it.first == s[i])
        {
            if(it.second == k - 1)
                st.pop();
            else 
                st.top().second++;
        }
        else st.push({s[i], 1});
    }
    string res = "";
    if(st.empty()) cout << "EMPTY";
    else
    {      
        while(!st.empty())
        {
            for(int i = 0; i < st.top().second; i++) 
                res += st.top().first;
            st.pop();
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> s >> k;
    solve();
}