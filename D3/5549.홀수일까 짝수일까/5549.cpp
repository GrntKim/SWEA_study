#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string n; cin >> n;
        cout << '#' << t << ' ' << ((n[n.length()-1]-'0')%2 == 0 ? "Even" : "Odd") << '\n';
    }
    return 0;
}