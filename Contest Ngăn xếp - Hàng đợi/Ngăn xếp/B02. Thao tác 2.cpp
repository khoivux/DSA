#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    stack<int> st;
    int q; cin >> q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin, s);
        
        if(s[0] == 'p' && s[1] == 'u')
        {
            int x = 0;
            for(int i = 5; i < s.length(); i++) x = x * 10 + (s[i] - '0');
            st.push(x);
        }
        else if(s[0] == 't')
        {
            if(!st.empty()) cout << st.top();
            else cout << "NONE";
            cout << endl;
        }
        else if(!st.empty()) st.pop();
    }
}