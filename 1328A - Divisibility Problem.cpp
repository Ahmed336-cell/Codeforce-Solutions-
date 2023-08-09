#include<iostream>

using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
	maher;

	ll n;
	cin >> n;
	while (n--) {
		ll a, b;
		cin >> a >> b;
		ll c = 0;
		c = a % b;
		if (c == 0) {
			cout << 0<<"\n";
		}
		else {
			cout << b - c<<"\n";
		}
	}
	return 0;
}
