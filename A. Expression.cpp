#include<iostream>
#include <cmath>
using namespace std;
#define ll long long
int main()
{
	ll i, ans, a, b, c;
	cin >> a >> b >> c;
	
		ans = a + b + c;
		ans = max(ans, (a * b * c));
		ans = max(ans, (a + b) * c);
		ans = max(ans, a * (b + c));
		ans = max(ans, a + (b * c));
		ans = max(ans, (a * b) + c);
		cout << ans << endl;
	
	return 0;
}
