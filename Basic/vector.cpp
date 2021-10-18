#include <bits/stdc++.h>
//#include <vector>
using namespace std;
int main()
{
	vector<int> v1;
	int element;
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the to add this to vector ";
		cin >> element;
		v1.push_back(element);
	}
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}
	return 0;
}
