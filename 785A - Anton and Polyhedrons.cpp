#include<iostream>
#include<string>
using namespace std;
#define ll long long
#define maher ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    int t;
    cin >> t;
    int c = 0;
    while (t--) {
        string s;
        cin >> s;
        if (s == "Tetrahedron") {
            c += 4;
        }
        else if (s == "Cube") {
            c += 6;
        }
        else if (s == "Octahedron") {
            c += 8;
        }
        else if (s == "Dodecahedron") {
            c += 12;
        }
        else if (s == "Icosahedron") {
            c += 20;
        }

    }
    cout << c;

    return 0;
}







