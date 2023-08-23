#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include <math.h>
using namespace std;
#define ll long long
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846 
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);





int main() {
    int n, p;
    cin >> n;
    vector<int>v(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> p;
        v[p] = i;

    }
    cout << v[1];
    for (int i = 2; i <= n; i++) {
        cout << " " << v[i];
    }

   

    return 0;
}
