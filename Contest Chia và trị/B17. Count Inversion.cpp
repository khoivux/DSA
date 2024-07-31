#include <bits/stdc++.h>
#define ll long long

using namespace std;
int merge(int a[], vector<int> tmp, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	int res = 0;
	while(i <= mid && j <= right)
	{
		if(a[i] > a[j])
		{
			//Khi a[i] > a[j] thi cac so tu a[i] den a[mid] deu > a[j]
			res += mid - i + 1;
			tmp[k++] = a[j++];
		}
		else tmp[k++] = a[i++];
	}

	while(i <= mid) tmp[k++] = a[i++];
	while(j <= right) tmp[k++] = a[j++];

	for(int i = left; i <= right; i++) a[i] = tmp[i];
	return res;
}
int mergeSort(int a[], vector<int> tmp, int left, int right)
{
	int res = 0;
	if(left < right)
	{
		int mid = (left + right) / 2;

		res += mergeSort(a, tmp, left, mid);
		res += mergeSort(a, tmp, mid + 1, right);
		res += merge(a, tmp, left, mid, right);
	}
	return res;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n];
	vector<int> tmp(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << mergeSort(a, tmp, 0, n - 1);
}