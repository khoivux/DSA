#include <bits/stdc++.h>
#define ll long long

using namespace std;

void merge(int a[], int left, int mid, int right)
{
    vector <int> x(a + left, a + mid + 1);
    vector <int> y(a + mid + 1, a + right + 1);

    int i = 0, j = 0;
    while(i < x.size() && j < y.size())
    {
        if(x[i] < y[j])
        {
            a[left++] = x[i++];
        }
        else a[left++] = y[j++];
    }

    while(i < x.size()) a[left++] = x[i++];
    while(j < y.size()) a[left++] = y[j++];
}

void mergeSort(int a[], int left, int right)
{
    if(left >= right) return;
    int mid = (left + right) / 2;

    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a, 0, n - 1);
    for(auto it : a) cout << it << " ";
}