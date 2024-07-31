#include <bits/stdc++.h>
#define ll long long
//HoanVi
using namespace std;
int n;
int a[1000];
string s[100];

void start()
{
	for(int i = 1; i <= n; i++)
		a[i] = i;
}
void result()
{
	for(int i = 1; i <= n; i++)
	{
		cout << s[a[i]] << " ";
	}
	cout << endl;
}
bool isFinal()
{
	for(int i = 1; i < n; i++)
	{
		if(a[i] < a[i + 1]) return false;
	}
	return true;
}
void nextGen()
{
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1])
	{
		i--;
	}
	int j = n;
	while(a[j] < a[i]) j--;
	swap(a[i], a[j]);
	int l = i + 1, r = n;
	while(l <= r)
	{
		swap(a[l], a[r]);
		l++; r--;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n; 
	for(int i = 1; i <= n; i++) cin >> s[i];
	sort(s + 1, s + n + 1);
	
	start();
	result();
	while(!isFinal())
	{
		nextGen();
		result();
	}
}