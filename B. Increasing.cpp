#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);





int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
       }
        if (n == 1) {
            cout << "YES" << endl;
        }
        else {
            sort(v.begin(), v.end());
            for (int i = 1; i <v.size(); i++) {
                if (v[i] == v[i - 1]) {
                    flag = false;
                    break;
                }
                
            }
            if (flag) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}







