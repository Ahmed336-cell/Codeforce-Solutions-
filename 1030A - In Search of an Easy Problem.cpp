#include<iostream>

using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	maher;
	int n; 
	cin >> n;
	int score = 0;
	while (n--) {
		int num;
		cin >> num;
		score += num;
	}
	if (score < 1) {
		cout << "EASY" << endl;
	}
	else {
		cout << "HARD" << endl;
	}
	return 0;
}
