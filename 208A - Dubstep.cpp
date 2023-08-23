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
    string s , sub="WUB";
    cin >> s;
    bool flage = true;
    for (int i = 0; i <s.size(); i++) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (!flage) {
                cout << " ";
            }
            continue;
        }
        else {
            flage = 0;
            cout << s[i];
        }

        
    }

   

    return 0;
}

