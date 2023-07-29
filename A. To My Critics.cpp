#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<string>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
	maher;
	int n;
	cin >> n;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a + b >= 10 || a+c>=10 || c+b>=10) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
