By ahmed_maher22, contest: Codeforces Round 886 (Div. 4), problem: (B) Ten Words of Wisdom, Accepted, #, Copy
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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0, an;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			if (a <= 10) {
				if (ans < b) {
					ans = b;
					an = i;
				}
			}
		}
		cout << an+1 << endl;
 
 
	}
	return 0;
}
