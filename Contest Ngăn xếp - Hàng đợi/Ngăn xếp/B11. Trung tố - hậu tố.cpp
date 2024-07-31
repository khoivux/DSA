#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

string s;

int priority(char c)
{
	if(c == '*' || c == '/') return 2; 
	else if(c == '+' || c == '-')return 1;
	return 0;
}

void solve()
{
	string res = "";
	stack<char> st;	

	for(int i = 0; i < s.length(); i++)
	{

		if(s[i] == '(') 
		{
			st.push(s[i]);
		}
		else if(s[i] == ')')
		{
			while(st.top() != '(')
			{
				res += st.top();
				st.pop();
			}
			st.pop(); // pop '('
		}
		else if(!isalpha(s[i]))
		{
			while(!st.empty() && priority(st.top()) >= priority(s[i]))
			{
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else res += s[i];
		cout << i << " " << st.top() << " " << res << endl;
	}

	cout << res << endl;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> s;
	solve();
}