#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int n; 
int a[1999];
int R[1999], L[19999];

void smaller_right(int res[])
{
	stack<int> st;
	for(int i = 0; i < n; i++)
	{
		while(!st.empty() && a[i] < a[st.top()])
		{
			res[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		res[st.top()] = n;
		st.pop();
	}
}
void smaller_left(int res[])
{
	stack<int> st;
	for(int i = n - 1; i >= 0; i--)
	{
		while(!st.empty() && a[i] < a[st.top()])
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
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	smaller_left(L);
	smaller_right(R);
	int res = -1;
	for(int i = 0; i < n; i++)
	{
		res = max(res, a[i] * (R[i] - L[i] - 1));
	}
	cout << res << endl;
}