#include <bits/stdc++.h>
using namespace std;
//Mang hieu
/*
	D[0] = A[0];
	D[i] = A[i] - A[i - 1];
*/
main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int d[n];//Mang hieu
	for(int i = 0; i < n; i++)
	{
		if(!i) d[i] = a[i];
		else d[i] = a[i] - a[i - 1];
	}
	
	//xay dung mang cong don cua d ==> a
	int f[n];
	for(int i = 0; i < n; i++)
	{
		if(!i) f[i] = d[i];
		else f[i] = f[i - 1] + d[i];
	}
}