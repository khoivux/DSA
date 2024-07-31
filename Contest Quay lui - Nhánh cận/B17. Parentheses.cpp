#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
string tmp = "[](){}";
string s;
vector<string> res;
bool check(string s)
{
    stack <char> st;
    for(char x : s)
    {
        if(x == '[' || x == '{' || x == '(')
        {
            st.push(x);
        }
        else
        {
            if(st.empty()) return false;
            char y = st.top();
            st.pop();
            if((x == ')' && y != '(') || (x == ']' && y != '[') || (x == '}' && y != '{') )
            {
                return false;
            }
        }
    }
    if(st.empty()) return true;
    return false;
}
void Try(int i)
{
    for(int j = 0; j < tmp.length(); j++)
    {
        s += tmp[j];
        if(s.length() == n) 
        {
            if(check(s))
            res.push_back(s);
        }        
        else Try(i + 1);

        s.pop_back();
    }
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    if(n % 2) cout << "-1";
    else
    {
        Try(1);
        sort(res.begin(), res.end());
        for(string x : res) cout << x << endl;
    }
}