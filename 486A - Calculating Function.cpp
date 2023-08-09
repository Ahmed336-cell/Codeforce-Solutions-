#include<iostream>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	maher;
	ll n;
	ll t=0;
	cin >> n;
	if (n % 2 == 0) {
		t = n / 2;
	}
	else {
		t = ((n + 1) / 2) * (-1);
	}
	cout << t;
	return 0;
}
