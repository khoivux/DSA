#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int n;
int a[1999];
int BR[1999], SR[1999];

void bigger_right(int res[])
{
	stack<int> st;
	for(int i = 0; i < n; i++)
	{
		while(!st.empty() && a[i] > a[st.top()])
		{
			res[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		res[st.top()] = -1;
		st.pop();
	}
}

void smaller_right(int res[])
{
	stack<int> st;
	for(int i = 0; i < n; i++)
	{
		while(!st.empty() && a[i] < a[st.top()])
		{
			res[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		res[st.top()] = -1;
		st.pop();
	}
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n; 
	for(int i = 0; i < n; i++) cin >> a[i];
	bigger_right(BR);
	smaller_right(SR);
	for(int i = 0; i < n; i++)
	{
		if(BR[i] == -1) cout << -1;
		else cout << SR[BR[i]];
		cout << " ";
	}
	cout << endl;
}