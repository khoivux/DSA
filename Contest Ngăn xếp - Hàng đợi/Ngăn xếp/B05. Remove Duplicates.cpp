#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>

using namespace std;

stack<pair<char, int>> st;
string s, res = "";
int k; 
void solve()
{
     for(int i = 0; i < s.length(); i++)
    {
        if(!st.empty() && s[i] == st.top().first && st.top().second == k - 1)
            st.pop();
        else
        {
            if(st.empty() || s[i] != st.top().first)
                st.push({s[i], 1});
            else st.top().second++;
        }           
    }
    if(st.empty()) cout << "EMPTY";
   
    while(!st.empty()) 
    {
        for(int i = 0; i < st.top().second; i++)
            res += st.top().first;
        st.pop();
    }
    reverse(res.begin(), res.end());
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
      
    cin >> s >> k;
    solve();  
    cout << res;
}
