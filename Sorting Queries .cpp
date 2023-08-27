#include <bits/stdc++.h>
#define maher  ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);

using namespace std;
int main() {
    maher;
   long long int n;
   cin>>n;
   vector<int>vc;
   multiset<int>mt;
    while (n--){
        long long  int op,num;
        cin>>op;
        if(op == 1){
            cin>>num;
            vc.push_back(num);
        }else if(op == 2){
            if(!mt.empty()) {
                cout << *mt.begin() << '\n';
                    mt.erase(mt.begin());
            }else {
                cout<<vc[0]<<'\n';
                vc.erase(vc.begin());
            }
        }else if(op == 3){
            for(auto i : vc){
                mt.insert(i);
                vc.clear();
            }
        }
    }
    

    return 0;
}
