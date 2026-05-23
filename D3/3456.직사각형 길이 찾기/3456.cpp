#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        set<int> s;
        for(int i=0; i<3; i++) {
            int l; cin >> l;
            if(s.find(l) == s.end())
                s.insert(l);
            else s.erase(l);
        }
        cout << '#' << t << ' ' << *s.begin() << '\n';
    }
    return 0;
}