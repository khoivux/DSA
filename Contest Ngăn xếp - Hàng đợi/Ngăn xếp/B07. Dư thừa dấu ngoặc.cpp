#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>

using namespace std;

stack<char> st;
string s;

bool checkDuthua()
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')')
        {
            if(st.empty()) return true;
            else
            {
                int j = st.top();
                if(i - j <= 2) return true;
                else if(s[j + 1] == '(' && s[i - 1] == ')') return true;
                else st.pop();
            }
        }
    }
    if(st.empty()) return false;
    else return true;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
      
    cin >> s;
    if(checkDuthua()) cout << "YES";
    else cout << "NO";
    cout << endl;
}
