#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;
        cout << '#' << t << ' ' << (a + b) % 24 << '\n';
    }
    return 0;
}