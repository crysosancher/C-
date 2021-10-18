#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector<vector<int>> v;
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		vector<int> l;
		for (int j = 0; j < k; j++)
		{
			int m;
			cin >> m;
			l.push_back(m);
		}
		v.push_back(l);
	}
	for (int i = 0; i < q; i++)
	{
		int p, w;
		cin >> p >> w;
		cout << v[p][w] << endl;
	}
	return 0;
}