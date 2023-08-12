#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<string>
#include <math.h>
using namespace std;
#define ll long long
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846 
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);





int main() {
	ll t,ans=0;
	double n;
	cin >> t;
	while (t--) {
		cin >> n;
		ans = ceil((n / 2) - 1);
		cout << ans << endl;
	}
}
