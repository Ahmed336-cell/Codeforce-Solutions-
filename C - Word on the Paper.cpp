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
		string answer;
		for (int i = 0; i < 8; i++) {
			string s;
			cin >> s;
			
			for (auto c : s) {
				if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
					answer += c;
				}
			}
		}
		cout << answer<<endl;
		answer.clear();
	}
	return 0;
}
