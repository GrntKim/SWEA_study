#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int a, b; cin >> a >> b;
        cout << '#' << t << ' ' << ((a >= 10 || b >= 10) ? -1 : a*b) << '\n';
    }
    return 0;
}