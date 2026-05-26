#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int len; cin >> len;
        cout << '#' << t << ' ' << (len%2 == 0 ? "Alice" : "Bob") << '\n';
    }
    return 0;
}