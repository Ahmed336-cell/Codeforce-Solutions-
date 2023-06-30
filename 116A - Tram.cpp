#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	int n,in, out,maxi=0;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> out >> in;
		maxi -= out;
		maxi += in;
		v.push_back(maxi);
	}
	sort(v.begin(), v.end());
	cout << v.back();

	
	return 0;
}
