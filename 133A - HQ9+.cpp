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
	string s;
	cin >> s;
	bool flage = false;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >33 && s[i] <126) {
			if (s[i] == 'H' || s[i] == '9' || s[i] == 'Q') {
				flage = true;
			}
		}
	}
	if (flage) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
