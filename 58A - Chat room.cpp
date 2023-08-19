#include<iostream>
using namespace std;


int main() {
    string s , h = "hello";
    cin >> s;
    int p=0, j=0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == h[j]) {
            p++;
            j++;
        }
    }

    if (p == 5) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
   

    return 0;
}
